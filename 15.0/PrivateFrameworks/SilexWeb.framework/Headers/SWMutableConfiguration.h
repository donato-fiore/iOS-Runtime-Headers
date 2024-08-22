// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SWMUTABLECONFIGURATION_H
#define SWMUTABLECONFIGURATION_H

@class NSString, NSDictionary, NSLocale, NSURL;
@protocol SWLocation;


#import "SWConfiguration.h"

@interface SWMutableConfiguration : SWConfiguration

@property (nonatomic) CGSize canvasSize; // ivar: canvasSize
@property (nonatomic) CGRect contentFrame; // ivar: contentFrame
@property (copy, nonatomic) NSString *contentSizeCategory; // ivar: contentSizeCategory
@property (copy, nonatomic) NSDictionary *dataSources; // ivar: dataSources
@property (copy, nonatomic) NSLocale *locale; // ivar: locale
@property (copy, nonatomic) NSObject<SWLocation> *location; // ivar: location
@property (copy, nonatomic) NSURL *sourceURL; // ivar: sourceURL
@property (copy, nonatomic) NSString *storeFront; // ivar: storeFront




@end


#endif