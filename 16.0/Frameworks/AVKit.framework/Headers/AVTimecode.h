// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTIMECODE_H
#define AVTIMECODE_H


#import <Foundation/Foundation.h>


@interface AVTimecode : NSObject

@property (nonatomic) ? frameDuration; // ivar: _frameDuration
@property (nonatomic) NSInteger frameNumber; // ivar: _frameNumber
@property (nonatomic) unsigned int tc_flags; // ivar: _tc_flags
@property (nonatomic) CVSMPTETime timecodeStruct; // ivar: _timecodeStruct


-(BOOL)stringIsValidNumericValue:(id)arg0 ;
-(id)initWithTimecodeString:(id)arg0 ;


@end


#endif