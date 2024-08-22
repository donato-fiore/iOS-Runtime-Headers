// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSERVICESTATE_H
#define HFSERVICESTATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HFServiceState : NSObject

@property (readonly, nonatomic) NSInteger primaryState;
@property (readonly, nonatomic) NSInteger priority;
@property (readonly, copy, nonatomic) NSString *stateTypeIdentifier;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;


+(Class)stateClassForServiceDescriptor:(id)arg0 ;
+(id)optionalCharacteristicTypes;
+(id)requiredCharacteristicTypes;
+(id)stateClassIdentifier;
+(id)stateForServiceDescriptor:(id)arg0 withBatchReadResponse:(id)arg1 ;
-(id)initWithBatchReadResponse:(id)arg0 ;


@end


#endif