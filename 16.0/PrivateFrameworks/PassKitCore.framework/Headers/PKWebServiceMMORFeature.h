// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKWEBSERVICEMMORFEATURE_H
#define PKWEBSERVICEMMORFEATURE_H

@class NSSet;


#import "PKWebServiceRegionFeature.h"

@interface PKWebServiceMMORFeature : PKWebServiceRegionFeature

@property (readonly, copy, nonatomic) NSSet *supportedNetworks; // ivar: _supportedNetworks


-(id)initWithDictionary:(id)arg0 region:(id)arg1 ;


@end


#endif