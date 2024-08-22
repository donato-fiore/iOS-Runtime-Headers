// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWAITFORREADINGLISTCOMPLETIONACTIONOPERATION_H
#define WFWAITFORREADINGLISTCOMPLETIONACTIONOPERATION_H

@class NSString;
@protocol WFActionExtendedOperation;

#import <Foundation/Foundation.h>


@interface WFWaitForReadingListCompletionActionOperation : NSObject <WFActionExtendedOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)addCompletionHandlerIfRunning:(id)arg0 ;
-(void)cancel;


@end


#endif