// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMAPIARTISTRESPONSEPARSER_H
#define NMAPIARTISTRESPONSEPARSER_H

@protocol NMAPIResponseParser;

#import <Foundation/Foundation.h>


@interface NMAPIArtistResponseParser : NSObject <NMAPIResponseParser>





-(id)resultsWithDictionary:(id)arg0 error:(*id)arg1 ;


@end


#endif