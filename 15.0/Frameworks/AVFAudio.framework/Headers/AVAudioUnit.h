// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOUNIT_H
#define AVAUDIOUNIT_H

@class AUAudioUnit, NSString;


#import "AVAudioNode.h"

@interface AVAudioUnit : AVAudioNode

@property (readonly, nonatomic) AUAudioUnit *AUAudioUnit;
@property (readonly, nonatomic) AudioComponentDescription audioComponentDescription;
@property (readonly, nonatomic) *OpaqueAudioComponentInstance audioUnit;
@property (readonly, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger version;


+(void)instantiateWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(BOOL)loadAudioUnitPresetAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)setValue:(float)arg0 forParam:(unsigned int)arg1 ;
-(float)valueForParam:(unsigned int)arg0 ;
-(id)initWithAudioComponentDescription:(struct AudioComponentDescription )arg0 ;


@end


#endif