// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUTOCORRECTIONRECORDING_H
#define AUTOCORRECTIONRECORDING_H

@class NSArray;


#import "AutocorrectionTest.h"

@interface AutocorrectionRecording : AutocorrectionTest {
    NSArray *_inputTouches;
}




+(id)testWithInput:(id)arg0 expectedOutput:(id)arg1 ;
-(id)description;
-(id)input;


@end


#endif