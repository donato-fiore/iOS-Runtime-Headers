// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSESSIONSUMMARYDATA_H
#define ICASSESSIONSUMMARYDATA_H

@class NSArray;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASSessionSummaryData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSArray *sessionSummaryArray; // ivar: _sessionSummaryArray


+(id)dataName;
-(id)initWithSessionSummaryArray:(id)arg0 ;
-(id)toDict;


@end


#endif