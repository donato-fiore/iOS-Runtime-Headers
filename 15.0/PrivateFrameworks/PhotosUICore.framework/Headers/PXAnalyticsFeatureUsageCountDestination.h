// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXANALYTICSFEATUREUSAGECOUNTDESTINATION_H
#define PXANALYTICSFEATUREUSAGECOUNTDESTINATION_H

@class NSString, PHPhotoLibrary;
@protocol CPAnalyticsDestinationProtocol;

#import <Foundation/Foundation.h>


@interface PXAnalyticsFeatureUsageCountDestination : NSObject <CPAnalyticsDestinationProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;


-(void)processEvent:(id)arg0 ;


@end


#endif