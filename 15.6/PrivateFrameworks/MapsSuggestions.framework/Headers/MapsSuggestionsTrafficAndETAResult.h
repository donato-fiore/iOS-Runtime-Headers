// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSTRAFFICANDETARESULT_H
#define MAPSSUGGESTIONSTRAFFICANDETARESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsTrafficAndETAResult : NSObject

@property (nonatomic) BOOL isSuccess; // ivar: _isSuccess
@property (copy, nonatomic) NSString *longTrafficString; // ivar: _longTrafficString
@property (nonatomic) CGFloat seconds; // ivar: _seconds
@property (copy, nonatomic) NSString *shortTrafficString; // ivar: _shortTrafficString
@property (copy, nonatomic) NSString *spokenRouteName; // ivar: _spokenRouteName
@property (copy, nonatomic) NSString *writtenRouteName; // ivar: _writtenRouteName


-(id)initWithGEOTrafficAndETAResult:(id)arg0 ;


@end


#endif