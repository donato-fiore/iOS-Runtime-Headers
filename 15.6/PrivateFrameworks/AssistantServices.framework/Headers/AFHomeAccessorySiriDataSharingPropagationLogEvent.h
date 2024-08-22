// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFHOMEACCESSORYSIRIDATASHARINGPROPAGATIONLOGEVENT_H
#define AFHOMEACCESSORYSIRIDATASHARINGPROPAGATIONLOGEVENT_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFHomeAccessorySiriDataSharingPropagationLogEvent : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy, nonatomic) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly, copy, nonatomic) NSString *associatedChangeLogEventIdentifier; // ivar: _associatedChangeLogEventIdentifier
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger propagationEvent; // ivar: _propagationEvent
@property (readonly, copy, nonatomic) NSString *propagationEventReason; // ivar: _propagationEventReason
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 accessoryIdentifier:(id)arg1 propagationEvent:(NSInteger)arg2 propagationEventReason:(id)arg3 associatedChangeLogEventIdentifier:(id)arg4 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif