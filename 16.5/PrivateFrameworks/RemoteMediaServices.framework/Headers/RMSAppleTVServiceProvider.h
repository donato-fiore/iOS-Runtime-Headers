// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMSAPPLETVSERVICEPROVIDER_H
#define RMSAPPLETVSERVICEPROVIDER_H



#import "RMSHomeSharingServiceProvider.h"

@interface RMSAppleTVServiceProvider : RMSHomeSharingServiceProvider



-(NSInteger)serviceFlagsFromTXTDictionary:(id)arg0 ;
-(NSInteger)serviceTypeFromTXTDictionary:(id)arg0 ;
-(id)searchType;


@end


#endif