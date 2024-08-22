// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSHIDEVENTDISCRETEDISPATCHINGPREDICATE_H
#define BKSHIDEVENTDISCRETEDISPATCHINGPREDICATE_H

@class NSString, NSSet;
@protocol NSSecureCoding, BSDescriptionProviding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface BKSHIDEventDiscreteDispatchingPredicate : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying, NSMutableCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *descriptors; // ivar: _descriptors
@property (readonly, copy, nonatomic) NSSet *displays;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *senderDescriptors; // ivar: _senderDescriptors
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)containsDescriptor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)specifiesDescriptor:(id)arg0 ;
-(id)_initWithSourceDescriptors:(id)arg0 descriptors:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif