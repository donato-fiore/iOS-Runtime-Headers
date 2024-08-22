// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRAFFICANDETARESULT_H
#define GEOTRAFFICANDETARESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface GEOTrafficAndETAResult : NSObject

@property (nonatomic) CGFloat aggressiveTravelTime; // ivar: _aggressiveTravelTime
@property (nonatomic) CGFloat conservativeTravelTime; // ivar: _conservativeTravelTime
@property (nonatomic) BOOL isSuccess; // ivar: _isSuccess
@property (copy, nonatomic) NSString *longTrafficString; // ivar: _longTrafficString
@property (nonatomic) CGFloat seconds; // ivar: _seconds
@property (copy, nonatomic) NSString *shortTrafficString; // ivar: _shortTrafficString
@property (copy, nonatomic) NSString *spokenRouteName; // ivar: _spokenRouteName
@property (copy, nonatomic) NSString *writtenRouteName; // ivar: _writtenRouteName




@end


#endif