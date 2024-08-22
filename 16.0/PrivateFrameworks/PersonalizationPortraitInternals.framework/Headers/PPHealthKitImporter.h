// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPHEALTHKITIMPORTER_H
#define PPHEALTHKITIMPORTER_H

@class HKHealthStore;

#import <Foundation/Foundation.h>

#import "PPSQLDatabase.h"

@interface PPHealthKitImporter : NSObject {
    HKHealthStore *_healthStore;
    PPSQLDatabase *_db;
}




-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(void)importHealthKitData;
-(void)importHealthKitDataWithShouldContinueBlock:(id)arg0 ;


@end


#endif