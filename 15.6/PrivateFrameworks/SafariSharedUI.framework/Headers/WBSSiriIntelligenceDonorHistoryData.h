// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSIRIINTELLIGENCEDONORHISTORYDATA_H
#define WBSSIRIINTELLIGENCEDONORHISTORYDATA_H

@class NSArray, NSString, NSDate, NSURL;

#import <Foundation/Foundation.h>


@interface WBSSiriIntelligenceDonorHistoryData : NSObject

@property (copy, nonatomic) NSArray *autocompleteTriggers; // ivar: _autocompleteTriggers
@property (copy, nonatomic) NSString *fullPageText; // ivar: _fullPageText
@property (copy, nonatomic) NSDate *lastVisitedDate; // ivar: _lastVisitedDate
@property (copy, nonatomic) NSString *pageTitle; // ivar: _pageTitle
@property (copy, nonatomic) NSURL *pageURL; // ivar: _pageURL
@property (copy, nonatomic) NSString *readerText; // ivar: _readerText
@property (copy, nonatomic) NSString *userVisibleURLString; // ivar: _userVisibleURLString
@property (nonatomic) NSUInteger visitCount; // ivar: _visitCount




@end


#endif