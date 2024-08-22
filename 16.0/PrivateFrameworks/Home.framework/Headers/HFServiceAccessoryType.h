// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSERVICEACCESSORYTYPE_H
#define HFSERVICEACCESSORYTYPE_H

@class NSString;


#import "HFAccessoryType.h"

@interface HFServiceAccessoryType : HFAccessoryType

@property (readonly, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly, nonatomic) NSString *subtype; // ivar: _subtype


+(id)na_identity;
-(id)debugDescription;
-(id)description;
-(id)initWithServiceType:(id)arg0 subtype:(id)arg1 ;


@end


#endif