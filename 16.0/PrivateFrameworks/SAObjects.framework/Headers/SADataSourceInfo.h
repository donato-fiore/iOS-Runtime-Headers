// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SADATASOURCEINFO_H
#define SADATASOURCEINFO_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SADataSourceInfo : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *contextIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *proximityHint;
@property (copy, nonatomic) NSString *sourceDeviceOwnership;
@property (readonly) Class superclass;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif