// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTEXTTOTOPICTRANSFORM_H
#define PPTEXTTOTOPICTRANSFORM_H

@class _PASLock, NSString, _PASNotificationToken;
@protocol TRINotificationToken;

#import <Foundation/Foundation.h>


@interface PPTextToTopicTransform : NSObject {
    _PASLock *_lock;
    id<TRINotificationToken> *_trialToken;
    NSString *_vocabularyPath;
    NSString *_weightsPath;
    NSString *_mappingId;
    _PASNotificationToken *_assetUpdateNotificationToken;
}


@property (readonly, nonatomic) NSUInteger outputTopicCount;
@property (readonly, nonatomic) float threshold;


+(id)sharedInstance;
-(id)_init;
-(id)_initWithVocabulary:(id)arg0 weights:(id)arg1 ;
-(id)_payloadForTopic:(unsigned int)arg0 ;
-(id)init;
-(void)dealloc;
-(void)iterateTopicsForText:(id)arg0 block:(id)arg1 ;


@end


#endif