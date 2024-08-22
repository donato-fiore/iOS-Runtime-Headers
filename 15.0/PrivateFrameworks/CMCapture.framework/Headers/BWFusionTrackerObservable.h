// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWFUSIONTRACKEROBSERVABLE_H
#define BWFUSIONTRACKEROBSERVABLE_H

@class NSDictionary, NSString;
@protocol FTObservable;

#import <Foundation/Foundation.h>


@interface BWFusionTrackerObservable : NSObject <FTObservable>

 {
    CGRect _box;
    NSInteger _objectKind;
    float _confidence;
    ? _frameTimestamp;
    ? _lastDetectionTimestamp;
    NSDictionary *_metadata;
    NSUInteger _identifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)objectKind;
-(NSUInteger)identifier;
-(float)confidence;
-(id)initWithKind:(NSInteger)arg0 box:(struct CGRect )arg1 confidence:(float)arg2 timestamp:(struct ? )arg3 identifier:(NSUInteger)arg4 metadata:(id)arg5 ;
-(id)metadata;
-(struct ? )frameTimestamp;
-(struct ? )lastDetectionTimestamp;
-(struct CGRect )box;
-(void)dealloc;


@end


#endif