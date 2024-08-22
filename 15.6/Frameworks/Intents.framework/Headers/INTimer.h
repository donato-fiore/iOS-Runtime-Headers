// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INTIMER_H
#define INTIMER_H

@class NSString;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INSpeakableString.h"

@interface INTimer : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) INSpeakableString *label; // ivar: _label
@property (readonly, nonatomic) CGFloat remainingTime; // ivar: _remainingTime
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabel:(id)arg0 duration:(CGFloat)arg1 remainingTime:(CGFloat)arg2 identifier:(id)arg3 state:(NSInteger)arg4 ;
-(id)initWithLabel:(id)arg0 duration:(CGFloat)arg1 remainingTime:(CGFloat)arg2 identifier:(id)arg3 state:(NSInteger)arg4 type:(NSInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif