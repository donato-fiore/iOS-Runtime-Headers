// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSSEARCHRESULTSECTION_H
#define STSSEARCHRESULTSECTION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface STSSearchResultSection : NSObject

@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithResultsArray:(id)arg0 ;
-(id)logResults;


@end


#endif