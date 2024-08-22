// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCORRECTSPELLINGINTENTHANDLER_H
#define WFCORRECTSPELLINGINTENTHANDLER_H

@class NSString;
@protocol WFCorrectSpellingIntentHandling;

#import <Foundation/Foundation.h>


@interface WFCorrectSpellingIntentHandler : NSObject <WFCorrectSpellingIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)handleCorrectSpelling:(id)arg0 completion:(id)arg1 ;
-(void)resolveTextForCorrectSpelling:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif