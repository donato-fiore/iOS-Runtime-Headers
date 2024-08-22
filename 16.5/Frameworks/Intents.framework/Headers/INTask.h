// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INTASK_H
#define INTASK_H

@class NSDateComponents, NSString;
@protocol INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INContactEventTrigger.h"
#import "INSpatialEventTrigger.h"
#import "INTemporalEventTrigger.h"
#import "INSpeakableString.h"

@interface INTask : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) INContactEventTrigger *contactEventTrigger; // ivar: _contactEventTrigger
@property (readonly, copy, nonatomic) NSDateComponents *createdDateComponents; // ivar: _createdDateComponents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDateComponents *modifiedDateComponents; // ivar: _modifiedDateComponents
@property (readonly, copy, nonatomic) NSString *parentIdentifier; // ivar: _parentIdentifier
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger; // ivar: _spatialEventTrigger
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger taskReference; // ivar: _taskReference
@property (readonly, nonatomic) NSInteger taskType; // ivar: _taskType
@property (readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger; // ivar: _temporalEventTrigger
@property (readonly, copy, nonatomic) INSpeakableString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 status:(NSInteger)arg1 taskType:(NSInteger)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 createdDateComponents:(id)arg5 modifiedDateComponents:(id)arg6 identifier:(id)arg7 ;
-(id)initWithTitle:(id)arg0 status:(NSInteger)arg1 taskType:(NSInteger)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 createdDateComponents:(id)arg5 modifiedDateComponents:(id)arg6 identifier:(id)arg7 contactEventTrigger:(id)arg8 taskReference:(NSInteger)arg9 ;
-(id)initWithTitle:(id)arg0 status:(NSInteger)arg1 taskType:(NSInteger)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 createdDateComponents:(id)arg5 modifiedDateComponents:(id)arg6 identifier:(id)arg7 priority:(NSInteger)arg8 ;
-(id)initWithTitle:(id)arg0 status:(NSInteger)arg1 taskType:(NSInteger)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 createdDateComponents:(id)arg5 modifiedDateComponents:(id)arg6 identifier:(id)arg7 priority:(NSInteger)arg8 contactEventTrigger:(id)arg9 taskReference:(NSInteger)arg10 parentIdentifier:(id)arg11 ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif