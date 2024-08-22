// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDATAMETADATADATASOURCE_H
#define HKDATAMETADATADATASOURCE_H

@class HKSample;
@protocol HKDataMetadataProvider;

#import <Foundation/Foundation.h>

#import "HKUnitPreferenceController.h"

@interface HKDataMetadataDataSource : NSObject <HKDataMetadataProvider>

 {
    HKSample *_sample;
    HKUnitPreferenceController *_unitPreferenceController;
}




-(id)_formattedValueTextForVO2MaxQuantityObject:(id)arg0 key:(id)arg1 section:(id)arg2 ;
-(id)_mediaSourceDisplayNamesForSample:(id)arg0 ;
-(id)initWithSample:(id)arg0 unitPreferenceController:(id)arg1 ;
-(void)addAdditionalDetailValuesToSection:(id)arg0 key:(id)arg1 value:(id)arg2 ;
-(void)addDetailValuesToSection:(id)arg0 ;


@end


#endif