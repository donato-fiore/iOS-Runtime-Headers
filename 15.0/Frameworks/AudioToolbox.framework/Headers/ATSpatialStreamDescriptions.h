// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATSPATIALSTREAMDESCRIPTIONS_H
#define ATSPATIALSTREAMDESCRIPTIONS_H

@class NSMutableArray, AVAudioFormat, NSArray;

#import <Foundation/Foundation.h>


@interface ATSpatialStreamDescriptions : NSObject {
    NSMutableArray *_streamParameters;
}


@property (readonly, nonatomic) AVAudioFormat *flatFormat; // ivar: _flatFormat
@property (readonly, nonatomic) AVAudioFormat *streamFormat; // ivar: _streamFormat
@property (readonly, nonatomic) NSArray *streamParameters;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)description;
-(id)init;
-(id)initWithFlatIOFormat:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif