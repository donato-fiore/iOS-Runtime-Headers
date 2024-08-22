// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSERVICEDESCRIPTOR_H
#define HFSERVICEDESCRIPTOR_H

@class NSString;
@protocol NAIdentifiable;

#import <Foundation/Foundation.h>

#import "HFServiceDescriptor.h"

@interface HFServiceDescriptor : NSObject <NAIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFServiceDescriptor *parentServiceDescriptor; // ivar: _parentServiceDescriptor
@property (readonly, copy, nonatomic) id *parentServiceDescriptorGenerator; // ivar: _parentServiceDescriptorGenerator
@property (readonly, copy, nonatomic) NSString *serviceSubtype; // ivar: _serviceSubtype
@property (readonly, copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithServiceType:(id)arg0 serviceSubtype:(id)arg1 parentServiceDescriptor:(id)arg2 ;
-(id)initWithServiceType:(id)arg0 serviceSubtype:(id)arg1 parentServiceDescriptorGenerator:(id)arg2 ;


@end


#endif