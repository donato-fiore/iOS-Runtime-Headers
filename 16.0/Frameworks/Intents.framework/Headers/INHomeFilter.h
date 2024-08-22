// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INHOMEFILTER_H
#define INHOMEFILTER_H

@class NSString, NSArray;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INSpeakableString.h"

@interface INHomeFilter : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) INSpeakableString *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (readonly, copy, nonatomic) NSArray *entityIdentifiers; // ivar: _entityIdentifiers
@property (readonly, copy, nonatomic) INSpeakableString *entityName; // ivar: _entityName
@property (readonly, nonatomic) NSInteger entityType; // ivar: _entityType
@property (readonly, copy, nonatomic) INSpeakableString *group; // ivar: _group
@property (readonly, nonatomic) BOOL hasAllQuantifier; // ivar: _hasAllQuantifier
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INSpeakableString *home; // ivar: _home
@property (readonly, nonatomic) BOOL isExcludeFilter; // ivar: _isExcludeFilter
@property (readonly, copy, nonatomic) INSpeakableString *outerDeviceName; // ivar: _outerDeviceName
@property (readonly, nonatomic) NSInteger outerDeviceType; // ivar: _outerDeviceType
@property (readonly, copy, nonatomic) INSpeakableString *room; // ivar: _room
@property (readonly, copy, nonatomic) INSpeakableString *scene;
@property (readonly, copy, nonatomic) INSpeakableString *service;
@property (readonly, nonatomic) NSInteger serviceType;
@property (readonly, nonatomic) NSInteger subServiceType; // ivar: _subServiceType
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INSpeakableString *zone; // ivar: _zone


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntityIdentifiers:(id)arg0 entityName:(id)arg1 entityType:(NSInteger)arg2 outerDeviceType:(NSInteger)arg3 innerDeviceName:(id)arg4 innerDeviceType:(NSInteger)arg5 home:(id)arg6 zone:(id)arg7 group:(id)arg8 room:(id)arg9 isExcludeFilter:(BOOL)arg10 ;
-(id)initWithEntityIdentifiers:(id)arg0 entityName:(id)arg1 entityType:(NSInteger)arg2 outerDeviceType:(NSInteger)arg3 outerDeviceName:(id)arg4 deviceType:(NSInteger)arg5 home:(id)arg6 zone:(id)arg7 group:(id)arg8 room:(id)arg9 isExcludeFilter:(BOOL)arg10 ;
-(id)initWithEntityIdentifiers:(id)arg0 entityName:(id)arg1 entityType:(NSInteger)arg2 outerDeviceType:(NSInteger)arg3 outerDeviceName:(id)arg4 deviceType:(NSInteger)arg5 home:(id)arg6 zone:(id)arg7 group:(id)arg8 room:(id)arg9 isExcludeFilter:(BOOL)arg10 hasAllQuantifier:(BOOL)arg11 ;
-(id)initWithEntityIdentifiers:(id)arg0 home:(id)arg1 scene:(id)arg2 homeZone:(id)arg3 group:(id)arg4 room:(id)arg5 accessory:(id)arg6 entityType:(NSInteger)arg7 serviceType:(NSInteger)arg8 subServiceType:(NSInteger)arg9 isExcludeFilter:(BOOL)arg10 entityName:(id)arg11 ;
-(id)initWithEntityIdentifiers:(id)arg0 home:(id)arg1 scene:(id)arg2 homeZone:(id)arg3 group:(id)arg4 room:(id)arg5 accessory:(id)arg6 service:(id)arg7 entityType:(NSInteger)arg8 serviceType:(NSInteger)arg9 subServiceType:(NSInteger)arg10 ;
-(id)initWithEntityIdentifiers:(id)arg0 home:(id)arg1 scene:(id)arg2 homeZone:(id)arg3 group:(id)arg4 room:(id)arg5 accessory:(id)arg6 service:(id)arg7 entityType:(NSInteger)arg8 serviceType:(NSInteger)arg9 subServiceType:(NSInteger)arg10 isExcludeFilter:(BOOL)arg11 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif