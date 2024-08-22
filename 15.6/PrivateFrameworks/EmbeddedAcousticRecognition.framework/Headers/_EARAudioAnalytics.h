// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARAUDIOANALYTICS_H
#define _EARAUDIOANALYTICS_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _EARAudioAnalytics : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *acousticFeatures; // ivar: _acousticFeatures
@property (readonly, nonatomic) CGFloat snr; // ivar: _snr
@property (readonly, copy, nonatomic) NSDictionary *speechRecognitionFeatures; // ivar: _speechRecognitionFeatures


-(id)_initWithSpeechRecognitionFeatures:(id)arg0 acousticFeatures:(id)arg1 snr:(CGFloat)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif