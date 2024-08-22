// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI49SUMMARYSHARINGPROFILETILEESCALATEDDETAILSPROVIDER_H
#define _TTC18HEALTHEXPERIENCEUI49SUMMARYSHARINGPROFILETILEESCALATEDDETAILSPROVIDER_H

@protocol NSFetchedResultsControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC18HealthExperienceUI49SummarySharingProfileTileEscalatedDetailsProvider : NSObject <NSFetchedResultsControllerDelegate>

 {
    ? _alertsCount;
    ? _changesCount;
    ? frc;
    ? sourceProfile;
}




-(id)init;
-(void)controllerDidChangeContent:(id)arg0 ;


@end


#endif