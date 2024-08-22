// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCV10STOCKSCORE18FORYOUCONFIGRECORDP33_FB30AEA7B56282916E4430A3993C597516HEADLINEMETADATA_H
#define _TTCV10STOCKSCORE18FORYOUCONFIGRECORDP33_FB30AEA7B56282916E4430A3993C597516HEADLINEMETADATA_H

@class NSDate, NSString;
@protocol FCHeadlineMetadata;

#import <Foundation/Foundation.h>


@interface _TtCV10StocksCore18ForYouConfigRecordP33_FB30AEA7B56282916E4430A3993C597516HeadlineMetadata : NSObject <FCHeadlineMetadata>

 {
    ? displayDate;
    ? storyType;
    ? title;
}


@property (nonatomic, readonly) NSDate *displayDate;
@property (nonatomic, readonly) NSString *storyType;
@property (nonatomic, readonly) NSString *title;


-(id)init;


@end


#endif