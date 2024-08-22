// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INHOMEENTITY_H
#define INHOMEENTITY_H

@class NSString, NSArray;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INSpeakableString.h"

@interface INHomeEntity : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger deviceType;
@property (readonly, copy, nonatomic) NSArray *deviceTypes; // ivar: _deviceTypes
@property (readonly, copy, nonatomic) NSString *entityIdentifier; // ivar: _entityIdentifier
@property (readonly, copy, nonatomic) INSpeakableString *entityName; // ivar: _entityName
@property (readonly, copy, nonatomic) INSpeakableString *group; // ivar: _group
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INSpeakableString *home; // ivar: _home
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) INSpeakableString *room; // ivar: _room
@property (readonly, nonatomic) NSInteger sceneType; // ivar: _sceneType
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) INSpeakableString *zone; // ivar: _zone
@property (readonly, copy, nonatomic) NSArray *zones; // ivar: _zones


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntityName:(id)arg0 type:(NSInteger)arg1 entityIdentifier:(id)arg2 deviceTypes:(id)arg3 sceneType:(NSInteger)arg4 room:(id)arg5 home:(id)arg6 group:(id)arg7 zones:(id)arg8 ;
-(id)initWithEntityName:(id)arg0 type:(NSInteger)arg1 entityIdentifier:(id)arg2 deviceTypes:(id)arg3 sceneType:(NSInteger)arg4 room:(id)arg5 zone:(id)arg6 home:(id)arg7 group:(id)arg8 ;
-(id)initWithName:(id)arg0 type:(NSInteger)arg1 deviceType:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif