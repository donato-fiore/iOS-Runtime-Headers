// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBWWALLPAPERWILLCHANGEACTION_H
#define SBWWALLPAPERWILLCHANGEACTION_H

@class BSAction;



@interface SBWWallpaperWillChangeAction : BSAction

@property (readonly, nonatomic) NSInteger variant;


-(id)initWithVariant:(NSInteger)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif