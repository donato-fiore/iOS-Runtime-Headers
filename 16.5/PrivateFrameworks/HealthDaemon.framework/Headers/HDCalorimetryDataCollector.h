// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCALORIMETRYDATACOLLECTOR_H
#define HDCALORIMETRYDATACOLLECTOR_H



#import "HDCoreMotionDataCollector.h"

@interface HDCalorimetryDataCollector : HDCoreMotionDataCollector



+(BOOL)isCoreMotionCaloriePushModelEnabled;
+(BOOL)isNatalimeterAvailable;
+(BOOL)supportsCollectionForProfile:(id)arg0 ;
-(CGFloat)queue_differenceFromDatum:(id)arg0 toDatum:(id)arg1 type:(id)arg2 ;
-(Class)coreMotionDatumClass;
-(id)collectedTypes;
-(id)initWithProfile:(id)arg0 ;
-(id)persistentIdentifier;
-(id)queue_newDataSource;


@end


#endif