// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INHOMEUSERTASK_H
#define INHOMEUSERTASK_H

@class NSString;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INHomeAttributeValue.h"

@interface INHomeUserTask : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger attribute; // ivar: _attribute
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger taskType; // ivar: _taskType
@property (readonly, copy, nonatomic) INHomeAttributeValue *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTaskType:(NSInteger)arg0 attribute:(NSInteger)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif