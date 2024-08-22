// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASETRANSMISSIONMODELERSOURCEPOINTSET_H
#define PHASETRANSMISSIONMODELERSOURCEPOINTSET_H


#import <Foundation/Foundation.h>


@interface PHASETransmissionModelerSourcePointSet : NSObject {
    vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> _points;
}


@property (readonly, nonatomic) NSInteger size; // ivar: _size


-(float)attenuationAtIndex:(NSInteger)arg0 ;
-(float)getAttenuationAtIndex:(NSInteger)arg0 ;
-(id)getPositionAndAttenuationAtIndex;
-(id)getPositionAtIndex;
-(id)init;
-(id)initWithRenderSourceView:(*void)arg0 ;
-(id)positionAndAttenuationAtIndex;
-(id)positionAtIndex;


@end


#endif