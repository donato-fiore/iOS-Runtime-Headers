// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INHOMEAUTOMATIONENTITYPROVIDER_H
#define INHOMEAUTOMATIONENTITYPROVIDER_H

@class NSArray, NSString;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INHomeAutomationEntityProvider : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *accessoryNames; // ivar: _accessoryNames
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *destinationDeviceId; // ivar: _destinationDeviceId
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *homeName; // ivar: _homeName
@property (readonly, copy, nonatomic) NSString *intentDeviceQuantifier; // ivar: _intentDeviceQuantifier
@property (readonly, copy, nonatomic) NSString *intentDeviceType; // ivar: _intentDeviceType
@property (readonly, copy, nonatomic) NSArray *intentFromEntities; // ivar: _intentFromEntities
@property (readonly, copy, nonatomic) NSString *intentPlaceHint; // ivar: _intentPlaceHint
@property (readonly, copy, nonatomic) NSString *intentReference; // ivar: _intentReference
@property (readonly, copy, nonatomic) NSArray *roomNames; // ivar: _roomNames
@property (readonly, copy, nonatomic) NSArray *serviceGroups; // ivar: _serviceGroups
@property (readonly, copy, nonatomic) NSArray *serviceNames; // ivar: _serviceNames
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *zoneNames; // ivar: _zoneNames


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRoomNames:(id)arg0 homeName:(id)arg1 zoneNames:(id)arg2 accessoryNames:(id)arg3 serviceNames:(id)arg4 serviceGroups:(id)arg5 intentFromEntities:(id)arg6 intentDeviceQuantifier:(id)arg7 destinationDeviceId:(id)arg8 intentDeviceType:(id)arg9 intentPlaceHint:(id)arg10 intentReference:(id)arg11 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif