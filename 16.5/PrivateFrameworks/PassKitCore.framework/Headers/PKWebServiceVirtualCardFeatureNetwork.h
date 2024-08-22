// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKWEBSERVICEVIRTUALCARDFEATURENETWORK_H
#define PKWEBSERVICEVIRTUALCARDFEATURENETWORK_H


#import <Foundation/Foundation.h>

#import "PKOSVersionRequirementRange.h"

@interface PKWebServiceVirtualCardFeatureNetwork : NSObject

@property (nonatomic) BOOL implicitlySupported; // ivar: _implicitlySupported
@property (nonatomic) NSInteger network; // ivar: _network
@property (retain, nonatomic) PKOSVersionRequirementRange *versions; // ivar: _versions


+(id)virtualCardFeatureNetworksFromDictionary:(id)arg0 ;
-(BOOL)isSupportedOnDevice:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 network:(NSInteger)arg1 ;


@end


#endif