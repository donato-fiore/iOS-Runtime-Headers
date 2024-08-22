// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OZARPERSONINFO_H
#define OZARPERSONINFO_H

@class NSValue, NSNumber, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface OZARPersonInfo : NSObject

@property (nonatomic) NSValue *boundingBox; // ivar: _boundingBox
@property (nonatomic) NSNumber *index; // ivar: _index
@property (nonatomic) NSMutableDictionary *jointTransforms; // ivar: _jointTransforms
@property (nonatomic) NSValue *transform; // ivar: _transform
@property (nonatomic) NSValue *worldSize; // ivar: _worldSize


-(id)init;
-(id)init:(id)arg0 ;
-(struct ? )simdTransform;
-(struct ? )simdTransform:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif