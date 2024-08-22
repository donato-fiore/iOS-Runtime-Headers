// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UVMUTABLEPREVIEWSCENESETTINGS_H
#define UVMUTABLEPREVIEWSCENESETTINGS_H

@class UIMutableApplicationSceneSettings;



@interface UVMutablePreviewSceneSettings : UIMutableApplicationSceneSettings

@property (nonatomic) CGSize previewMaximumSize;
@property (nonatomic) NSInteger previewSceneLayout;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)makeCopy;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif