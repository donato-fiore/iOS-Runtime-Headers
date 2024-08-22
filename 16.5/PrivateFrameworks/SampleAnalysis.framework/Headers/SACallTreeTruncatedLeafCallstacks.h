// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACALLTREETRUNCATEDLEAFCALLSTACKS_H
#define SACALLTREETRUNCATEDLEAFCALLSTACKS_H

@class NSString;
@protocol SAJSONSerialization;


#import "SACallTreeFrame.h"

@interface SACallTreeTruncatedLeafCallstacks : SACallTreeFrame <SAJSONSerialization>

 {
    NSString *_otherCallTreeDescription;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)callTreeFrameWithFrame:(id)arg0 startSampleIndex:(NSUInteger)arg1 sampleCount:(NSUInteger)arg2 isLeafFrame:(BOOL)arg3 ;
-(BOOL)isTruncatedLeafCallstack;
-(id)initWithFrame:(id)arg0 startSampleIndex:(NSUInteger)arg1 sampleCount:(NSUInteger)arg2 otherCallTreeDescription:(id)arg3 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg0 ;


@end


#endif