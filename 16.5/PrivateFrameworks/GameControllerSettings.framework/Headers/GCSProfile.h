// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCSPROFILE_H
#define GCSPROFILE_H

@class NSDictionary, NSString, NSDate, NSUUID;
@protocol NSSecureCoding, GCSJSONSerializable, GCSJSONObject;

#import <Foundation/Foundation.h>


@interface GCSProfile : NSObject <NSSecureCoding, GCSJSONSerializable>



@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isBaseProfile) BOOL baseProfile; // ivar: _baseProfile
@property (readonly, nonatomic) BOOL customizable; // ivar: _customizable
@property (readonly, nonatomic) NSInteger doublePressShareGesture; // ivar: _doublePressShareGesture
@property (readonly, nonatomic) NSDictionary *elementMappings; // ivar: _elementMappings
@property (readonly, nonatomic) NSString *gameBundleIdentifier; // ivar: _gameBundleIdentifier
@property (readonly, nonatomic) BOOL hapticFeedbackOverride; // ivar: _hapticFeedbackOverride
@property (readonly, nonatomic) CGFloat hapticStrength; // ivar: _hapticStrength
@property (readonly, nonatomic) NSString *id;
@property (readonly, nonatomic) NSObject<GCSJSONObject> *jsonObject;
@property (readonly, nonatomic) NSInteger lightbarColor; // ivar: _lightbarColor
@property (readonly, nonatomic) BOOL lightbarCustomColorEnabled; // ivar: _lightbarCustomColorEnabled
@property (readonly, nonatomic) BOOL lightbarOverride; // ivar: _lightbarOverride
@property (readonly, nonatomic) NSInteger longPressShareGesture; // ivar: _longPressShareGesture
@property (readonly, nonatomic) NSDate *modifiedDate; // ivar: _modifiedDate
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *persistentControllerIdentifier; // ivar: _persistentControllerIdentifier
@property (readonly, nonatomic) NSString *sfSymbolsName; // ivar: _sfSymbolsName
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(NSInteger)defaultDoublePressGesture;
+(NSInteger)defaultLongPressGesture;
+(id)adhocProfileForController:(id)arg0 gameBundleIdentifier:(id)arg1 ;
+(id)archivalClasses;
+(id)defaultProfile;
+(id)defaultProfileUUID;
+(id)elementMappingsFrom:(id)arg0 for:(id)arg1 ;
+(id)newBaseProfile;
+(id)profile;
+(id)profileWithName:(id)arg0 ;
-(id)anonymizedCopy;
-(id)description;
-(id)elementMappingsWithJSONDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObject:(id)arg0 ;
-(id)initWithUUID:(id)arg0 name:(id)arg1 persistentControllerIdentifier:(id)arg2 gameBundleIdentifier:(id)arg3 baseProfile:(BOOL)arg4 customizable:(BOOL)arg5 sfSymbolsName:(id)arg6 elementMappings:(id)arg7 hapticFeedbackOverride:(BOOL)arg8 hapticStrength:(CGFloat)arg9 doublePressShareGesture:(NSInteger)arg10 longPressShareGesture:(NSInteger)arg11 lightbarOverride:(BOOL)arg12 lightbarCustomColorEnabled:(BOOL)arg13 lightbarColor:(NSInteger)arg14 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif