// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBWWALLPAPERIMAGESLOTREQUESTACTION_H
#define SBWWALLPAPERIMAGESLOTREQUESTACTION_H

@class BSAction, NSString, UITraitCollection;



@interface SBWWallpaperImageSlotRequestAction : BSAction

@property (readonly, nonatomic) NSInteger desiredStyle;
@property (readonly, copy, nonatomic) NSString *slotIdentifier;
@property (readonly, copy, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) NSInteger variant;


-(id)initWithVariant:(NSInteger)arg0 desiredStyle:(NSInteger)arg1 traitCollection:(id)arg2 slotIdentifier:(id)arg3 forResponseOnQueue:(id)arg4 withHandler:(id)arg5 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif