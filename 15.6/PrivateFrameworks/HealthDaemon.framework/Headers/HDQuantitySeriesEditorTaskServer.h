// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDQUANTITYSERIESEDITORTASKSERVER_H
#define HDQUANTITYSERIESEDITORTASKSERVER_H

@class HKQuantitySample;
@protocol HKQuantitySeriesSampleEditorTaskServerInterface;


#import "HDStandardTaskServer.h"

@interface HDQuantitySeriesEditorTaskServer : HDStandardTaskServer <HKQuantitySeriesSampleEditorTaskServerInterface>

 {
    HKQuantitySample *_quantitySample;
}




+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)remote_commitRemovedDatums:(id)arg0 completion:(id)arg1 ;


@end


#endif