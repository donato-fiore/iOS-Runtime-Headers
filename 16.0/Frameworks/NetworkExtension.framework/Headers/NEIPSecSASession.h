// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIPSECSASESSION_H
#define NEIPSECSASESSION_H

@class NSString, NSMutableArray, NSArray;
@protocol OS_dispatch_queue, NEIPSecSASessionDelegate;

#import <Foundation/Foundation.h>


@interface NEIPSecSASession : NSObject {
    NSString *_name;
    NSMutableArray *_securityAssociations;
    NSMutableArray *_larvalSAs;
    NSUInteger _uniqueIndex;
    NSObject<OS_dispatch_queue> *_internalDelegateQueue;
}


@property (weak) NSObject<NEIPSecSASessionDelegate> *delegate; // ivar: _delegate
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) NSString *name;
@property (readonly) NSArray *securityAssociations;


-(BOOL)addLarvalSA:(id)arg0 ;
-(BOOL)addSA:(id)arg0 ;
-(BOOL)migrateSA:(id)arg0 ;
-(BOOL)removeSA:(id)arg0 ;
-(BOOL)updateSA:(id)arg0 ;
-(id)copyEmptySASession;
-(id)description;
-(id)initWithName:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeAllSAs;
-(void)startBlackholeDetection:(unsigned int)arg0 incomingSA:(id)arg1 outgoingSA:(id)arg2 ;
-(void)startIdleTimeout:(unsigned int)arg0 incomingSA:(id)arg1 outgoingSA:(id)arg2 ;


@end


#endif