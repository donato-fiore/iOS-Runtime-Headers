// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTDIFFERENTIALPRIVACYRECORDER_H
#define AVTDIFFERENTIALPRIVACYRECORDER_H

@class NSMutableDictionary;
@protocol AVTDifferentialPrivacyRecorder;

#import <Foundation/Foundation.h>


@interface AVTDifferentialPrivacyRecorder : NSObject <AVTDifferentialPrivacyRecorder>



@property (readonly, copy, nonatomic) id *numRecorderProvider; // ivar: _numRecorderProvider
@property (readonly, nonatomic) NSMutableDictionary *numRecorders; // ivar: _numRecorders
@property (readonly, copy, nonatomic) id *stringRecorderProvider; // ivar: _stringRecorderProvider
@property (readonly, nonatomic) NSMutableDictionary *stringRecorders; // ivar: _stringRecorders


+(id)makeCachingNumRecorderProvider:(SEL)arg0 ;
+(id)makeCachingStringRecorderProvider:(SEL)arg0 ;
-(id)init;
// -(id)initWithStringRecorderProvider:(id)arg0 numericDataRecorderProvider:(unk)arg1  ;
-(void)recordNumber:(id)arg0 forKey:(id)arg1 ;
-(void)recordString:(id)arg0 forKey:(id)arg1 ;


@end


#endif