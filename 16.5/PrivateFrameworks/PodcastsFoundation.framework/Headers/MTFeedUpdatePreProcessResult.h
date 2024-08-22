// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTFEEDUPDATEPREPROCESSRESULT_H
#define MTFEEDUPDATEPREPROCESSRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTFeedUpdatePreProcessResult : NSObject

@property (readonly, nonatomic) NSString *createdPodcastUUID; // ivar: _createdPodcastUUID
@property (readonly, nonatomic) BOOL shouldContinue; // ivar: _shouldContinue


+(id)shouldNotContinueResult;
-(id)initWithShouldContinue:(BOOL)arg0 createdPodcastUUID:(id)arg1 ;


@end


#endif