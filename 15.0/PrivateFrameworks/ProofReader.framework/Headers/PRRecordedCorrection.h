// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRRECORDEDCORRECTION_H
#define PRRECORDEDCORRECTION_H

@class NSTextCheckingResult, NSString;

#import <Foundation/Foundation.h>


@interface PRRecordedCorrection : NSObject {
    NSTextCheckingResult *_correctionResult;
    NSString *_correctedString;
}


@property BOOL hasRecordedResponse; // ivar: _hasRecordedResponse


-(id)correctedString;
-(id)correctionResult;
-(id)description;
-(id)initWithCorrectionResult:(id)arg0 correctedString:(id)arg1 ;
-(void)dealloc;


@end


#endif