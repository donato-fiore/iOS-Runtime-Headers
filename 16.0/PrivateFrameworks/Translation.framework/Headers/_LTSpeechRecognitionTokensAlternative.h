// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTSPEECHRECOGNITIONTOKENSALTERNATIVE_H
#define _LTSPEECHRECOGNITIONTOKENSALTERNATIVE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTSpeechRecognitionTokensAlternative : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger confidence; // ivar: _confidence
@property (nonatomic) BOOL hasSpaceAfter; // ivar: _hasSpaceAfter
@property (nonatomic, getter=isLowConfidence) BOOL lowConfidence; // ivar: _lowConfidence
@property (copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif