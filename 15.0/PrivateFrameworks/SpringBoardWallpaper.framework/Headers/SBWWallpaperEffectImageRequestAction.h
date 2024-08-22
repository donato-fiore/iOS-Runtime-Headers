// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWWALLPAPEREFFECTIMAGEREQUESTACTION_H
#define SBWWALLPAPEREFFECTIMAGEREQUESTACTION_H

@class BSAction, NSString;



@interface SBWWallpaperEffectImageRequestAction : BSAction

@property (readonly, copy, nonatomic) NSString *slotIdentifier;


-(id)initWithSlotIdentifier:(id)arg0 forResponseOnQueue:(id)arg1 withHandler:(id)arg2 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif