// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCODESERVICEIMPLEMENTATION_H
#define CKCODESERVICEIMPLEMENTATION_H

@class NSNumber, NSOperationQueue, NSURL, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKContainerImplementation.h"

@interface CKCodeServiceImplementation : NSObject

@property (readonly, copy, nonatomic) NSNumber *boxedDatabaseScope; // ivar: _boxedDatabaseScope
@property (weak, nonatomic) CKContainerImplementation *containerImplementation; // ivar: _containerImplementation
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, copy, nonatomic) NSURL *serviceInstanceURL; // ivar: _serviceInstanceURL
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue; // ivar: _underlyingDispatchQueue


-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)CKStatusReportArray;
-(id)_initWithContainerImplementation:(id)arg0 serviceName:(id)arg1 boxedDatabaseScope:(id)arg2 serviceInstanceURL:(id)arg3 ;
-(id)description;
-(void)addOperation:(id)arg0 wrappingCodeService:(id)arg1 convenienceConfiguration:(id)arg2 ;


@end


#endif