// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNCLUSTEREROPTIONS_H
#define VNCLUSTEREROPTIONS_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface VNClustererOptions : NSObject

@property (copy, nonatomic) NSString *cachePath; // ivar: _cachePath
@property (nonatomic) NSUInteger requestRevision; // ivar: _requestRevision
@property (retain, nonatomic) NSData *state; // ivar: _state
@property (nonatomic) float threshold; // ivar: _threshold
@property (nonatomic) float torsoThreshold; // ivar: _torsoThreshold
@property (nonatomic) NSUInteger torsoprintRequestRevision; // ivar: _torsoprintRequestRevision
@property (copy, nonatomic) NSString *type; // ivar: _type


-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 threshold:(float)arg3 ;
-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 threshold:(float)arg3 requestRevision:(NSUInteger)arg4 ;
-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 threshold:(float)arg3 torsoThreshold:(float)arg4 ;
-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 threshold:(float)arg3 torsoThreshold:(float)arg4 requestRevision:(NSUInteger)arg5 ;
-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 threshold:(float)arg3 torsoThreshold:(float)arg4 requestRevision:(NSUInteger)arg5 torsoprintRequestRevision:(NSUInteger)arg6 ;


@end


#endif