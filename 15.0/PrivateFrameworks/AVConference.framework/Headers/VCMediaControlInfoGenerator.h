// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMEDIACONTROLINFOGENERATOR_H
#define VCMEDIACONTROLINFOGENERATOR_H

@class NSMutableArray, NSString;
@protocol VCMediaControlInfoDelegate;

#import <Foundation/Foundation.h>


@interface VCMediaControlInfoGenerator : NSObject <VCMediaControlInfoDelegate>

 {
    *__CFDictionary _callbacksDict;
    NSMutableArray *_controlInfoPool;
    _opaque_pthread_mutex_t _controlInfoPoolLock;
    unsigned int _optionBitmap;
    _opaque_pthread_rwlock_t _callbackDictLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned char fecFeedbackVersion; // ivar: _fecFeedbackVersion
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) unsigned int type; // ivar: _type
@property (readonly) unsigned char version; // ivar: _version


-(*void)newControlInfo;
-(*void)newControlInfoWithBuffer:(char *)arg0 length:(NSUInteger)arg1 optionalControlInfo:(struct ? *)arg2 ;
-(*void)newMediaControlInfo;
-(*void)newMediaControlInfoWithBuffer:(char *)arg0 length:(NSUInteger)arg1 optionalControlInfo:(struct ? *)arg2 ;
-(NSUInteger)feedbackSize;
-(id)initWithType:(unsigned int)arg0 version:(unsigned char)arg1 ;
-(id)newControlInfoFromPool;
-(int)addMediaControlInfoOption:(unsigned int)arg0 ;
-(int)deregisterCallbacksWithContext:(*void)arg0 ;
-(int)registerFillBlobCallback:(*unk)arg0 processBlobCallback:(*unk)arg1 context:(*void)arg2 ;
-(void)dealloc;
-(void)disposeControlInfo:(id)arg0 ;
-(void)passMediaControlInfo:(id)arg0 isFillBlobCallback:(BOOL)arg1 ;


@end


#endif