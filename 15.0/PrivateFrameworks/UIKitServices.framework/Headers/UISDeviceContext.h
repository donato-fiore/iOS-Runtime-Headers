// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISDEVICECONTEXT_H
#define UISDEVICECONTEXT_H

@class NSDictionary, NSString;
@protocol BSXPCSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface UISDeviceContext : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying>

 {
    NSDictionary *_deviceInfoKeysToValues;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(id)_allKeys;
+(id)_keysToValueTypes;
+(id)defaultContext;
-(BOOL)_isDeviceInfoType:(NSInteger)arg0 appropriateForKey:(id)arg1 ;
-(BOOL)_isDeviceInfoValue:(id)arg0 appropriateForKey:(id)arg1 ;
-(BOOL)deviceInfoBoolValueForKey:(id)arg0 ;
-(BOOL)hasDeviceInfoValueForKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)deviceInfoFloatValueForKey:(id)arg0 ;
-(NSInteger)_valueTypeForKey:(id)arg0 ;
-(NSInteger)_valueTypeForValue:(id)arg0 ;
-(NSInteger)deviceInfoIntegerValueForKey:(id)arg0 ;
-(id)_dictionaryWithOnlyValidKeysFromDictionary:(id)arg0 ;
-(id)_rawDeviceInfoKeysToValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deviceInfoStringValueForKey:(id)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithDeviceInfoValues:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif