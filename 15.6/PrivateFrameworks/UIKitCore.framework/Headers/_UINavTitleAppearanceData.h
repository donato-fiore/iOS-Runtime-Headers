// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UINAVTITLEAPPEARANCEDATA_H
#define _UINAVTITLEAPPEARANCEDATA_H

@class UIBarAppearanceData, NSDictionary;



@interface _UINavTitleAppearanceData : UIBarAppearanceData {
    NSDictionary *_titleTextAttributes;
    NSDictionary *_largeTitleTextAttributes;
    UIOffset _titlePositionAdjustment;
}


@property (copy, nonatomic) NSDictionary *largeTitleTextAttributes;
@property (nonatomic) UIOffset titlePositionAdjustment;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;


+(id)decodeFromCoder:(id)arg0 prefix:(id)arg1 ;
+(id)standardTitleData;
-(BOOL)checkEqualTo:(id)arg0 ;
-(NSInteger)hashInto:(NSInteger)arg0 ;
-(id)replicate;
-(void)describeInto:(id)arg0 ;
-(void)encodeToCoder:(id)arg0 prefix:(id)arg1 ;


@end


#endif