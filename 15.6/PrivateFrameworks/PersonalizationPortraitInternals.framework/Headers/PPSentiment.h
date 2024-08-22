// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPSENTIMENT_H
#define PPSENTIMENT_H

@class _PASLock, _PASNotificationToken;

#import <Foundation/Foundation.h>


@interface PPSentiment : NSObject {
    float _weightBucketSize;
    float _intercept;
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateNotificationToken;
}




+(id)sharedInstance;
-(float)sentimentScoreForText:(id)arg0 ;
-(id)init;


@end


#endif