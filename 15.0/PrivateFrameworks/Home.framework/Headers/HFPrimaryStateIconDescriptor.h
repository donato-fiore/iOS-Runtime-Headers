// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFPRIMARYSTATEICONDESCRIPTOR_H
#define HFPRIMARYSTATEICONDESCRIPTOR_H

@class NSString;
@protocol HFIconDescriptor;

#import <Foundation/Foundation.h>


@interface HFPrimaryStateIconDescriptor : NSObject <HFIconDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger primaryState; // ivar: _primaryState
@property (readonly, nonatomic) BOOL shouldForceLTR; // ivar: _shouldForceLTR
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)iconDescriptorByMergingWithIconDescriptor:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 primaryState:(NSInteger)arg1 ;


@end


#endif