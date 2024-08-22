// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWMUTABLECONFIGURATION_H
#define SWMUTABLECONFIGURATION_H

@class NSURL, NSString, NSDictionary, NSLocale;
@protocol SWLocation;


#import "SWConfiguration.h"
#import "SWFeedConfiguration.h"

@interface SWMutableConfiguration : SWConfiguration

@property (copy, nonatomic) NSURL *activePictureInPictureURL; // ivar: activePictureInPictureURL
@property (nonatomic) CGSize canvasSize; // ivar: canvasSize
@property (nonatomic) CGRect contentFrame; // ivar: contentFrame
@property (copy, nonatomic) NSString *contentSizeCategory; // ivar: contentSizeCategory
@property (copy, nonatomic) NSDictionary *dataSources; // ivar: dataSources
@property (copy, nonatomic) SWFeedConfiguration *feedConfiguration; // ivar: feedConfiguration
@property (nonatomic) BOOL is24HourTime; // ivar: is24HourTime
@property (copy, nonatomic) NSLocale *locale; // ivar: locale
@property (copy, nonatomic) NSObject<SWLocation> *location; // ivar: location
@property (copy, nonatomic) NSURL *sourceURL; // ivar: sourceURL
@property (copy, nonatomic) NSString *storeFront; // ivar: storeFront




@end


#endif