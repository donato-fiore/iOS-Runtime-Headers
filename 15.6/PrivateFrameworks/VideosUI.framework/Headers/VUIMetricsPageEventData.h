// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMETRICSPAGEEVENTDATA_H
#define VUIMETRICSPAGEEVENTDATA_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface VUIMetricsPageEventData : NSObject

@property (retain, nonatomic) NSDictionary *eventData; // ivar: _eventData
@property (retain, nonatomic) NSString *pageId; // ivar: _pageId
@property (retain, nonatomic) NSString *pageType; // ivar: _pageType


+(id)createWithMetricsData:(id)arg0 ;
+(id)createWithPageId:(id)arg0 andPageType:(id)arg1 andEventData:(id)arg2 ;
+(id)createWithPageType:(id)arg0 ;
-(id)generateMetricsDataDictionary;


@end


#endif