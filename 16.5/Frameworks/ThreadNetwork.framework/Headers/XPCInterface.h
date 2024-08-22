// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XPCINTERFACE_H
#define XPCINTERFACE_H


#import <Foundation/Foundation.h>


@interface XPCInterface : NSObject



+(id)CTCSCreateXPCTransportInterface;
+(id)CTCSExpectedXPCInterfaceClassesForAllActiveDataSetRecords;
+(id)CTCSGetExpectedClassesForOptionsOverXPCInterface;
+(void)CTCSSetExpectedClassesForXPCBrokerInterface:(id)arg0 ;


@end


#endif