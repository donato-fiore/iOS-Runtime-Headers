// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFAPPEARANCESETTINGVALUE_H
#define WFAPPEARANCESETTINGVALUE_H

@class NSString;
@protocol WFNaming, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WFAppearanceSettingValue : NSObject <WFNaming, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger setting; // ivar: _setting
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
-(BOOL)isDarkModeOn;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSetting:(NSInteger)arg0 ;
-(id)valueByInvertingSetting;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif