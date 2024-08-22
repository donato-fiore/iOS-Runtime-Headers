// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCHOOSEFROMLISTINTENTHANDLER_H
#define WFCHOOSEFROMLISTINTENTHANDLER_H

@class NSString;
@protocol WFChooseFromListIntentHandling;

#import <Foundation/Foundation.h>


@interface WFChooseFromListIntentHandler : NSObject <WFChooseFromListIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)handleChooseFromList:(id)arg0 completion:(id)arg1 ;
-(void)provideChosenItemsOptionsCollectionForChooseFromList:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveChosenItemsForChooseFromList:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolvePromptForChooseFromList:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif