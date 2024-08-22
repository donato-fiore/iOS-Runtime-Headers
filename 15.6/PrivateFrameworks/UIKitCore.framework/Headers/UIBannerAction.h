// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIBANNERACTION_H
#define UIBANNERACTION_H

@class BSAction;


#import "_UIBannerContent.h"

@interface UIBannerAction : BSAction

@property (readonly, nonatomic) _UIBannerContent *bannerContent;
@property (readonly, nonatomic) BOOL tappable;


-(BOOL)bannerTapped;
-(NSInteger)UIActionType;
-(id)_initWithBannerContent:(id)arg0 responseHandler:(id)arg1 ;
-(id)initWithBannerContent:(id)arg0 ;
-(id)initWithBannerContent:(id)arg0 responseHandler:(id)arg1 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif