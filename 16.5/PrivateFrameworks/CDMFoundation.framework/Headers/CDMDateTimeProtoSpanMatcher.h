// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMDATETIMEPROTOSPANMATCHER_H
#define CDMDATETIMEPROTOSPANMATCHER_H

@class UPDataDetectors, NSString;
@protocol CDMProtoSpanMatcher;

#import <Foundation/Foundation.h>


@interface CDMDateTimeProtoSpanMatcher : NSObject <CDMProtoSpanMatcher>

 {
    UPDataDetectors *_upDataDetectors;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)buildMatchingSpan:(id)arg0 tokenChain:(id)arg1 ;
+(id)getAssetFolderNamesByTrialFactorNames;
-(id)initWithDataDetectorPath:(id)arg0 locale:(id)arg1 ;
-(id)matchSpansForTokenChain:(id)arg0 ;


@end


#endif