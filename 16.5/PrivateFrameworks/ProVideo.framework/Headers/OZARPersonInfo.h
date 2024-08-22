// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OZARPERSONINFO_H
#define OZARPERSONINFO_H

@class NSValue, NSNumber, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface OZARPersonInfo : NSObject

@property (retain, nonatomic) NSValue *boundingBox; // ivar: _boundingBox
@property (retain, nonatomic) NSNumber *index; // ivar: _index
@property (retain, nonatomic) NSMutableDictionary *jointTransforms; // ivar: _jointTransforms
@property (retain, nonatomic) NSValue *transform; // ivar: _transform
@property (retain, nonatomic) NSValue *worldSize; // ivar: _worldSize


-(id)init;
-(id)init:(id)arg0 ;
-(struct ? )simdTransform;
-(struct ? )simdTransform:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif