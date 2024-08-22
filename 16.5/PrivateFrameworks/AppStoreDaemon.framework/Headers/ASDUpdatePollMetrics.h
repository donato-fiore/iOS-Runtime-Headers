// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDUPDATEPOLLMETRICS_H
#define ASDUPDATEPOLLMETRICS_H

@class NSArray, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface ASDUpdatePollMetrics : NSObject

@property (copy, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs
@property (copy, nonatomic) NSDate *pollTime; // ivar: _pollTime
@property (copy, nonatomic) NSString *reason; // ivar: _reason


-(id)description;
-(id)dictionary;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif