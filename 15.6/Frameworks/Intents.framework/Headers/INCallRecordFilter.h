// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INCALLRECORDFILTER_H
#define INCALLRECORDFILTER_H

@class NSString, NSArray;
@protocol INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INCallRecordFilter : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger callCapability; // ivar: _callCapability
@property (readonly, nonatomic) NSUInteger callTypes; // ivar: _callTypes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly, nonatomic) NSInteger preferredCallProvider; // ivar: _preferredCallProvider
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
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParticipants:(id)arg0 callTypes:(NSUInteger)arg1 callCapability:(NSInteger)arg2 ;
-(id)initWithParticipants:(id)arg0 callTypes:(NSUInteger)arg1 callCapability:(NSInteger)arg2 preferredCallProvider:(NSInteger)arg3 ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif