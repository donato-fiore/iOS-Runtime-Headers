// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEALTHRECORDSEXTRACTOR_H
#define HKHEALTHRECORDSEXTRACTOR_H


#import <Foundation/Foundation.h>


@interface HKHealthRecordsExtractor : NSObject {
    ? $__lazy_storage_$_router;
    ? $__lazy_storage_$_decoder;
}




-(id)comparePatientResourceDataWithExisting:(id)arg0 incoming:(id)arg1 error:(*id)arg2 ;
-(id)extractResource:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif