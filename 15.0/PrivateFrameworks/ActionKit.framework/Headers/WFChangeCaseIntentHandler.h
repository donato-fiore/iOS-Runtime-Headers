// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCHANGECASEINTENTHANDLER_H
#define WFCHANGECASEINTENTHANDLER_H

@class NSString;
@protocol WFChangeCaseIntentHandling;

#import <Foundation/Foundation.h>


@interface WFChangeCaseIntentHandler : NSObject <WFChangeCaseIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)stringByApplyingAlternatingCaseToString:(id)arg0 ;
-(id)stringByApplyingSentenceCaseToString:(id)arg0 withLocale:(id)arg1 ;
-(id)stringByApplyingTitleCaseToString:(id)arg0 ;
-(void)handleChangeCase:(id)arg0 completion:(id)arg1 ;
-(void)resolveTextForChangeCase:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveTypeForChangeCase:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif