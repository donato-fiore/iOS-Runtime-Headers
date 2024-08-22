// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSMLSERVICESWRAPPER_H
#define SSMLSERVICESWRAPPER_H


#import <Foundation/Foundation.h>

#import "SSMLRangeConverterInternal.h"
#import "SSMLParserWrapperInternal.h"

@interface SSMLServicesWrapper : NSObject

@property (retain, nonatomic) SSMLRangeConverterInternal *converter; // ivar: _converter
@property (readonly) SSMLParserWrapperInternal *underlyingObject; // ivar: _underlyingObject


-(id)convertRange:(struct _NSRange )arg0 forSSML:(id)arg1 ;
-(id)generateSSMLFromAVSpeechUtterance:(id)arg0 ;
-(id)generateSSMLFromPlainTalkString:(id)arg0 ;
-(id)generateSSMLFromString:(id)arg0 ;
-(id)init;
-(id)parseSSMLToAVSpeechUtterances:(id)arg0 ;
-(id)parseSSMLToPlainTalk:(id)arg0 ;
-(id)parseSSMLToPlainText:(id)arg0 ;


@end


#endif