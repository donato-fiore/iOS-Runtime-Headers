// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARBUFFERPOPULATIONREGISTRY_H
#define ARBUFFERPOPULATIONREGISTRY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ARBufferPopulationRegistry : NSObject {
    NSMutableDictionary *_bufferToLabelLUT;
    NSMutableDictionary *_labelToSignpostTypeLUT;
    NSMutableDictionary *_labelToBuffersLUT;
    NSMutableDictionary *_bufferToTimestampLUT;
}


@property (readonly, nonatomic) NSUInteger count;


-(CGFloat)timestampForSurfaceID:(id)arg0 ;
-(NSUInteger)countWithLabel:(id)arg0 ;
-(id)description;
-(id)init;
-(id)labelForBufferWithSurfaceID:(id)arg0 ;
-(id)surfaceIDsForBuffersWithLabel:(id)arg0 ;
-(int)signpostTypeForLabel:(id)arg0 ;
-(void)registerBufferWithSurfaceID:(id)arg0 label:(id)arg1 signpostType:(id)arg2 timestamp:(CGFloat)arg3 ;
-(void)unregisterBufferWithSurfaceID:(id)arg0 ;


@end


#endif