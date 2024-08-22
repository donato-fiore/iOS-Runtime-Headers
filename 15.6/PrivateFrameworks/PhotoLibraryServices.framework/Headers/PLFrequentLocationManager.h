// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLFREQUENTLOCATIONMANAGER_H
#define PLFREQUENTLOCATIONMANAGER_H

@class NSSet;
@protocol PLMomentGenerationDataManagement;

#import <Foundation/Foundation.h>


@interface PLFrequentLocationManager : NSObject {
    BOOL _invalidateCurrentFrequentLocations;
}


@property (retain, nonatomic) NSSet *currentFrequentLocations; // ivar: _currentFrequentLocations
@property (weak, nonatomic) NSObject<PLMomentGenerationDataManagement> *momentGenerationDataManager; // ivar: _momentGenerationDataManager


-(BOOL)frequentLocationsDidChangeFromUpdateWithAllMoments:(id)arg0 ;
-(id)_createFrequentLocationsWithAllMoments:(id)arg0 ;
-(id)initWithMomentGenerationDataManager:(id)arg0 ;
-(void)invalidateCurrentFrequentLocations;


@end


#endif