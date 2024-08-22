// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSHIDEVENTDESCRIPTOR_H
#define BKSHIDEVENTDESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding, BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface BKSHIDEventDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int hidEventType; // ivar: _hidEventType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)descriptorForHIDEvent:(struct __IOHIDEvent *)arg0 ;
+(id)descriptorWithEventType:(unsigned int)arg0 ;
-(BOOL)describes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptorByAddingSenderIDToMatchCriteria:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventType:(unsigned int)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif