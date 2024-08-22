// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSLATIONACTIVITY_H
#define TRANSLATIONACTIVITY_H

@class WBSTranslationContext;


#import "TabDocumentActivity.h"

@interface TranslationActivity : TabDocumentActivity

@property (readonly, nonatomic) WBSTranslationContext *translationContext;


+(id)allTranslationActivities;
-(BOOL)canPerformWithTabDocument:(id)arg0 ;
-(BOOL)canPerformWithTranslationContext:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitleWithTabDocument:(id)arg0 ;
-(id)activityTitleWithTranslationContext:(id)arg0 ;
-(id)activityType;
-(void)performActivityWithTabDocument:(id)arg0 ;
-(void)performActivityWithTranslationContext:(id)arg0 ;
-(void)prepareWithTabDocument:(id)arg0 ;
-(void)prepareWithTranslationContext:(id)arg0 ;


@end


#endif