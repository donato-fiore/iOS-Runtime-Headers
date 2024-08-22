// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWWALLPAPEREFFECTIMAGEREQUESTACTIONRESPONSE_H
#define SBWWALLPAPEREFFECTIMAGEREQUESTACTIONRESPONSE_H

@class BSActionResponse;



@interface SBWWallpaperEffectImageRequestActionResponse : BSActionResponse

@property (readonly, nonatomic) NSInteger actualStyle;
@property (readonly, nonatomic) CGSize size;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif