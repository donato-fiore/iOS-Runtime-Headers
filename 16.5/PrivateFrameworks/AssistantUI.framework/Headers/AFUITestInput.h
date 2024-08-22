// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUITESTINPUT_H
#define AFUITESTINPUT_H

@class SASRequestOptions;

#import <Foundation/Foundation.h>


@interface AFUITestInput : NSObject

@property (readonly, nonatomic) SASRequestOptions *requestOptions; // ivar: _requestOptions


+(id)_baseRequestOptions;
-(id)_initWithRequestOptions:(id)arg0 ;
-(id)initWithRecordedSpeechURL:(id)arg0 ;
-(id)initWithText:(id)arg0 ;


@end


#endif