// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONDESCRIPTOR_H
#define CLKCOMPLICATIONDESCRIPTOR_H

@class NSString, NSLocale, NSArray, NSUserActivity, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CLKUserActivity.h"
#import "CLKWidgetComplicationDescriptor.h"

@interface CLKComplicationDescriptor : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) CLKUserActivity *clkUserActivity; // ivar: _clkUserActivity
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) BOOL needsAppNotify; // ivar: _needsAppNotify
@property (readonly, nonatomic) NSArray *supportedFamilies; // ivar: _supportedFamilies
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (retain, nonatomic) CLKWidgetComplicationDescriptor *widgetDescriptor; // ivar: _widgetDescriptor


+(BOOL)supportsSecureCoding;
+(id)allowedDictionaryClasses;
+(id)legacyComplicationDescriptor;
+(id)legacyComplicationDescriptorWithSupportedFamilies:(id)arg0 ;
-(BOOL)hasUserInfo;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 supportedFamilies:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 supportedFamilies:(id)arg2 userActivity:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 supportedFamilies:(id)arg2 userInfo:(id)arg3 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)validate;


@end


#endif