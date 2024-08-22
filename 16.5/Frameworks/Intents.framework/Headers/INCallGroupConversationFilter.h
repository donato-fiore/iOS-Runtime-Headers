// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCALLGROUPCONVERSATIONFILTER_H
#define INCALLGROUPCONVERSATIONFILTER_H

@class NSString, NSNumber, NSArray;
@protocol INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INCallGroup.h"
#import "INPerson.h"

@interface INCallGroupConversationFilter : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) INCallGroup *callGroup; // ivar: _callGroup
@property (readonly, copy, nonatomic) INPerson *caller; // ivar: _caller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *matchCallerAndParticipantsExactly; // ivar: _matchCallerAndParticipantsExactly
@property (readonly, copy, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCaller:(id)arg0 participants:(id)arg1 matchCallerAndParticipantsExactly:(id)arg2 callGroup:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif