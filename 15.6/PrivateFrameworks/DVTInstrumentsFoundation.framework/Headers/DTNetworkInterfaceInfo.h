// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTNETWORKINTERFACEINFO_H
#define DTNETWORKINTERFACEINFO_H


#import <Foundation/Foundation.h>


@interface DTNetworkInterfaceInfo : NSObject



+(id)interfaceNameMappings;
+(void)addInterface:(struct __SCNetworkInterface *)arg0 toNameMapping:(id)arg1 ;


@end


#endif