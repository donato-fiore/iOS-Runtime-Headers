// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPTICDICTIONARYREADER_H
#define HAPTICDICTIONARYREADER_H


#import <Foundation/Foundation.h>


@interface HapticDictionaryReader : NSObject {
    NSUInteger _urlIndex;
}




-(BOOL)parseEventsAndParameters:(id)arg0 reply:(id)arg1 ;
-(id)parseConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)parseEvent:(id)arg0 ;
-(id)parseEventParams:(id)arg0 ;
-(id)parseParam:(id)arg0 ;
-(id)parseParamCurve:(id)arg0 ;
-(id)parseParamCurveControlPoints:(id)arg0 ;
-(id)readAndVerifyVersion:(id)arg0 error:(*id)arg1 ;
-(id)readPatternID:(id)arg0 error:(*id)arg1 ;
-(id)scanForEmbeddedResources:(id)arg0 ;


@end


#endif