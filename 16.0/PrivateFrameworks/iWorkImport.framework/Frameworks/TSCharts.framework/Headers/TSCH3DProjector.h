// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DPROJECTOR_H
#define TSCH3DPROJECTOR_H


#import <Foundation/Foundation.h>


@interface TSCH3DProjector : NSObject

@property (readonly, nonatomic) *void combined; // ivar: _combined
@property (readonly, nonatomic) *void projection; // ivar: _projection
@property (readonly, nonatomic) *void transform; // ivar: _transform


+(id)projectorWithProjection:(*void)arg0 transform:(*void)arg1 ;
-(id)initWithProjection:(*void)arg0 transform:(*void)arg1 ;
-(struct line<glm::detail::tvec3<float>> )objectSpaceLineFromPoint:(*void)arg0 ;


@end


#endif