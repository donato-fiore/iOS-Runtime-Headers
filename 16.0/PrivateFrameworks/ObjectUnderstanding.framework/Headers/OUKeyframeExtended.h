// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OUKEYFRAMEEXTENDED_H
#define OUKEYFRAMEEXTENDED_H

@class NSString, NSUUID;
@protocol OUKeyframe;

#import <Foundation/Foundation.h>


@interface OUKeyframeExtended : NSObject <OUKeyframe>

 {
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _points;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _pointsToWorld;
    vector<unsigned char __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>> _semLabels;
    vector<unsigned short __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>> _semVotes;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _colors;
}


@property (nonatomic) ? cameraPose; // ivar: cameraPose
@property ? colors;
@property (readonly, nonatomic) NSInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int groupId; // ivar: groupId
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: identifier
@property ? points;
@property ? pointsToWorld;
@property ? semanticLabels;
@property ? semanticVotes;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: timestamp


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 withGroupId:(unsigned int)arg1 ;
-(id)initWithKeyframe:(id)arg0 voxelize:(BOOL)arg1 resample:(BOOL)arg2 outlierRemove:(BOOL)arg3 ;
-(void)filterOutPointsBeyondDistance:(float)arg0 ;
-(void)rotateAlongZAxis:(float)arg0 ;
-(void)select:(NSUInteger)arg0 indices:(*NSUInteger)arg1 from:(id)arg2 ;
-(void)translateBy;


@end


#endif