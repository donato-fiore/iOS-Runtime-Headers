// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFINCREMENTALSTATEICONDESCRIPTOR_H
#define HFINCREMENTALSTATEICONDESCRIPTOR_H

@class NSString, NSNumber;
@protocol HFIconDescriptor;

#import <Foundation/Foundation.h>


@interface HFIncrementalStateIconDescriptor : NSObject <HFIconDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSNumber *incrementalState; // ivar: _incrementalState
@property (readonly, nonatomic) BOOL shouldForceLTR; // ivar: _shouldForceLTR
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)iconDescriptorByMergingWithIconDescriptor:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 incrementalState:(id)arg1 ;


@end


#endif