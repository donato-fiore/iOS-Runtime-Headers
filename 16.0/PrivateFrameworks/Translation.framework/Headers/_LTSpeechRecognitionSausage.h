// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTSPEECHRECOGNITIONSAUSAGE_H
#define _LTSPEECHRECOGNITIONSAUSAGE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTSpeechRecognitionSausage : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *bins; // ivar: _bins


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOspreySausage:(id)arg0 choices:(id)arg1 locale:(id)arg2 ;
-(id)initWithRecognition:(id)arg0 wordConfidenceThreshold:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif