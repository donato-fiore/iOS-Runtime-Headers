// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXDRAGSESSION_H
#define AXDRAGSESSION_H

@class NSXPCConnection;
@protocol _DUIClientSessionAccessibility, AXDragSessionDragManager, AXDragSessionDelegate;

#import <Foundation/Foundation.h>


@interface AXDragSession : NSObject <_DUIClientSessionAccessibility>

 {
    NSXPCConnection *_connection;
    id<AXDragSessionDragManager> *_manager;
    BOOL _resumed;
    BOOL _aborted;
}


@property (weak, nonatomic) NSObject<AXDragSessionDelegate> *delegate; // ivar: _delegate


-(id)_serverSession;
-(id)initWithDruidConnection:(id)arg0 ;
-(id)manager;
-(void)abort;
-(void)cancel;
-(void)dragDidEndWithOperation:(NSUInteger)arg0 ;
-(void)dragStatusDidChange:(id)arg0 ;
-(void)dragWillBeginWithReply:(id)arg0 ;
-(void)drop;
-(void)moveToPoint:(struct CGPoint )arg0 forRequestor:(id)arg1 completion:(id)arg2 ;
-(void)resume;
-(void)setManager:(id)arg0 ;


@end


#endif