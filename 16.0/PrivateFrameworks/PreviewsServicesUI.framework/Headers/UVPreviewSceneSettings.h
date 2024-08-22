// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UVPREVIEWSCENESETTINGS_H
#define UVPREVIEWSCENESETTINGS_H

@class UIApplicationSceneSettings;



@interface UVPreviewSceneSettings : UIApplicationSceneSettings

@property (readonly, nonatomic) CGSize previewMaximumSize;
@property (readonly, nonatomic) NSInteger previewSceneLayout;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)makeMutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif