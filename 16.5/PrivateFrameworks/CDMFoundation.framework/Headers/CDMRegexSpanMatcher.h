// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMREGEXSPANMATCHER_H
#define CDMREGEXSPANMATCHER_H

@class NSString, NSNumber, NSArray;
@protocol CDMProtoSpanMatcher;

#import <Foundation/Foundation.h>


@interface CDMRegexSpanMatcher : NSObject <CDMProtoSpanMatcher>

 {
    NSString *_cachedFilePath;
    NSNumber *_fileVersion;
    NSArray *_regexEntries;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)readRegexAssetFromPath:(id)arg0 ;
-(id)initWithCachePath:(id)arg0 ;
-(id)matchSpansForTokenChain:(id)arg0 ;


@end


#endif