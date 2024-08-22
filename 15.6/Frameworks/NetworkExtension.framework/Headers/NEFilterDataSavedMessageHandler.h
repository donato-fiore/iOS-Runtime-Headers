// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEFILTERDATASAVEDMESSAGEHANDLER_H
#define NEFILTERDATASAVEDMESSAGEHANDLER_H


#import <Foundation/Foundation.h>


@interface NEFilterDataSavedMessageHandler : NSObject

@property (readonly, nonatomic) id *getVerdict; // ivar: _getVerdict
@property (readonly, nonatomic) id *handleVerdict; // ivar: _handleVerdict


// -(id)initWithGetVerdictBlock:(id)arg0 handleVerdictBlock:(unk)arg1  ;
-(void)enqueueWithFlow:(id)arg0 context:(id)arg1 ;
-(void)executeVerdictHandlerWithFlow:(id)arg0 verdict:(id)arg1 context:(id)arg2 ;
-(void)executeWithFlow:(id)arg0 context:(id)arg1 ;


@end


#endif