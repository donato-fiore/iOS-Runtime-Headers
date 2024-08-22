// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCAPACKAGEICONDESCRIPTOR_H
#define HFCAPACKAGEICONDESCRIPTOR_H

@class NSString, NSDictionary;
@protocol HFIconDescriptor;

#import <Foundation/Foundation.h>


@interface HFCAPackageIconDescriptor : NSObject <HFIconDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *iconModifiers; // ivar: _iconModifiers
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *packageIdentifier; // ivar: _packageIdentifier
@property (readonly, nonatomic) BOOL shouldForceLTR; // ivar: _shouldForceLTR
@property (readonly, nonatomic) NSString *state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)iconDescriptorShouldAlwaysAnimate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)iconDescriptorByMergingWithIconDescriptor:(id)arg0 ;
-(id)initWithPackageIdentifier:(id)arg0 ;
-(id)initWithPackageIdentifier:(id)arg0 state:(id)arg1 ;
-(id)initWithPackageIdentifier:(id)arg0 state:(id)arg1 modifiers:(id)arg2 ;


@end


#endif