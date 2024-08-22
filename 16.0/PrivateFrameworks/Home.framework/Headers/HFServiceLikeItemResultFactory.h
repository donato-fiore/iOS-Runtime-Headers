// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSERVICELIKEITEMRESULTFACTORY_H
#define HFSERVICELIKEITEMRESULTFACTORY_H


#import <Foundation/Foundation.h>


@interface HFServiceLikeItemResultFactory : NSObject



+(id)populateStandardResultsForHomeKitObject:(id)arg0 withBackingAccessory:(id)arg1 displayMetadata:(id)arg2 readResponse:(id)arg3 batteryLevelResults:(id)arg4 valueSource:(id)arg5 updateOptions:(id)arg6 ;
+(void)_appendDestinationURLResultsForHomeKitObject:(id)arg0 backingAccessory:(id)arg1 toResults:(id)arg2 ;
+(void)_appendSoftwareUpdateResultsForAccessory:(id)arg0 toResults:(id)arg1 ;


@end


#endif