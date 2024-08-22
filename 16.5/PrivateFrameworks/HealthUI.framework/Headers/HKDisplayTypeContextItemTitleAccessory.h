// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDISPLAYTYPECONTEXTITEMTITLEACCESSORY_H
#define HKDISPLAYTYPECONTEXTITEMTITLEACCESSORY_H

@class UIColor, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HKDisplayTypeContextItemTitleAccessory : NSObject <NSCopying>



@property (readonly, copy, nonatomic) UIColor *color; // ivar: _color
@property (readonly, copy, nonatomic) NSString *systemImageName; // ivar: _systemImageName


+(id)titleAccessoryWithImagedNamed:(id)arg0 imageColor:(id)arg1 ;
-(BOOL)_isEqualToTitleAccessory:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif