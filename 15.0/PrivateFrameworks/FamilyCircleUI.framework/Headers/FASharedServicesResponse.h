// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FASHAREDSERVICESRESPONSE_H
#define FASHAREDSERVICESRESPONSE_H

@class AAResponse, NSArray;



@interface FASharedServicesResponse : AAResponse

@property (readonly, nonatomic) NSArray *serviceGroups; // ivar: _serviceGroups
@property (readonly, nonatomic) NSArray *services; // ivar: _services


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;
-(void)_initializeServicesMapWithGroups:(id)arg0 andServices:(id)arg1 ;
-(void)_sharedServicesWithNoGrouping:(id)arg0 ;


@end


#endif