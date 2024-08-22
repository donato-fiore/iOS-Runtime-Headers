// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSPEECHAUDIOANALYTICS_H
#define AFSPEECHAUDIOANALYTICS_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSpeechAudioAnalytics : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *acousticFeatures; // ivar: _acousticFeatures
@property (readonly, nonatomic) CGFloat snr; // ivar: _snr
@property (readonly, nonatomic) NSDictionary *speechRecognitionFeatures; // ivar: _speechRecognitionFeatures


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSpeechRecognitionFeatures:(id)arg0 acousticFeatures:(id)arg1 ;
-(id)initWithSpeechRecognitionFeatures:(id)arg0 acousticFeatures:(id)arg1 snr:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif