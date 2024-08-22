// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTWEBSERVICEPHYSICALCARDACTIONRESPONSE_H
#define PKACCOUNTWEBSERVICEPHYSICALCARDACTIONRESPONSE_H

@class NSSet;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServicePhysicalCardActionResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) NSSet *updatedPhysicalCards; // ivar: _updatedPhysicalCards


-(id)initWithData:(id)arg0 ;


@end


#endif