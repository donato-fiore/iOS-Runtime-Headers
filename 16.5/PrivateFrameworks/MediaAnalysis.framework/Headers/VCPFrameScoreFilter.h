// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPFRAMESCOREFILTER_H
#define VCPFRAMESCOREFILTER_H


#import <Foundation/Foundation.h>


@interface VCPFrameScoreFilter : NSObject {
    int _numFilterTabs;
    *float _scoreArray;
    float _distanceVariance;
    float _diffVariance;
    int _numOfScores;
}




-(float)processFrameScore:(float)arg0 validScore:(BOOL)arg1 ;
-(id)initWithFilterTabs:(int)arg0 distanceVariance:(float)arg1 diffVariance:(float)arg2 ;
-(void)dealloc;


@end


#endif