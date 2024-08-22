// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTACTIVITYTRACETAPMEMOHANDLERDELEGATE_H
#define DTACTIVITYTRACETAPMEMOHANDLERDELEGATE_H

@class NSString;
@protocol DTTapMemoHandlerDelegate;

#import <Foundation/Foundation.h>


@interface DTActivityTraceTapMemoHandlerDelegate : NSObject <DTTapMemoHandlerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)peekAtMemo:(id)arg0 ;
-(void)sendDataMemo:(id)arg0 toBulkReceiver:(id)arg1 ;
-(void)sendDataMemo:(id)arg0 toClientUsingConfig:(id)arg1 ;
-(void)sendHeartbeatMemo:(id)arg0 toClientUsingConfig:(id)arg1 ;


@end


#endif