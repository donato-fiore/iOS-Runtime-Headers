// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRMSHOMESHARINGSERVICEPROVIDER_H
#define TVRMSHOMESHARINGSERVICEPROVIDER_H



#import "TVRMSBonjourServiceProvider.h"

@interface TVRMSHomeSharingServiceProvider : TVRMSBonjourServiceProvider



-(NSInteger)serviceDiscoverySource;
-(id)searchScope;
-(id)searchType;


@end


#endif