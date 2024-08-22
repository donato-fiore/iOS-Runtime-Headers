// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUIP33_32BBCFBB356028961E4520309C3A50C420DATAMETADATADELEGATE_H
#define _TTC18HEALTHEXPERIENCEUIP33_32BBCFBB356028961E4520309C3A50C420DATAMETADATADELEGATE_H

@class HKHealthStore;
@protocol HKDataMetadataViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC18HealthExperienceUIP33_32BBCFBB356028961E4520309C3A50C420DataMetadataDelegate : NSObject <HKDataMetadataViewControllerDelegate>

 {
    ? unitPreferencesController;
}


@property (nonatomic, readonly) HKHealthStore *healthStore; // ivar: healthStore


-(id)displayTypeController;
-(id)init;
-(id)unitController;


@end


#endif