// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVTITLEAPPEARANCEDATA_H
#define _UINAVTITLEAPPEARANCEDATA_H

@class UIBarAppearanceData, NSDictionary;


#import "_UINavigationBarTitleFontProvider.h"

@interface _UINavTitleAppearanceData : UIBarAppearanceData {
    NSDictionary *_titleTextAttributes;
    NSDictionary *_largeTitleTextAttributes;
    UIOffset _titlePositionAdjustment;
    _UINavigationBarTitleFontProvider *_titleFontProvider;
    NSInteger _titleFontProviderIdiom;
}


@property (copy, nonatomic) NSDictionary *largeTitleTextAttributes;
@property (nonatomic) UIOffset titlePositionAdjustment;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;


+(id)decodeFromCoder:(id)arg0 prefix:(id)arg1 ;
+(id)standardTitleData;
+(id)standardTitleDataForIdiom:(NSInteger)arg0 ;
-(BOOL)checkEqualTo:(id)arg0 ;
-(NSInteger)hashInto:(NSInteger)arg0 ;
-(id)replicate;
-(void)describeInto:(id)arg0 ;
-(void)encodeToCoder:(id)arg0 prefix:(id)arg1 ;


@end


#endif