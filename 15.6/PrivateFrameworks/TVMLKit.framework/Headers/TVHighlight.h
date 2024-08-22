// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVHIGHLIGHT_H
#define TVHIGHLIGHT_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>

#import "TVTimeRange.h"

@interface TVHighlight : NSObject

@property (retain, nonatomic) TVTimeRange *dateRange; // ivar: _dateRange
@property (retain, nonatomic) NSString *highlightDescription; // ivar: _highlightDescription
@property (retain, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (retain, nonatomic) TVTimeRange *timeRange; // ivar: _timeRange




@end


#endif