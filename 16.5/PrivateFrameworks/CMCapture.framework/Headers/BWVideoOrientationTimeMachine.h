// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWVIDEOORIENTATIONTIMEMACHINE_H
#define BWVIDEOORIENTATIONTIMEMACHINE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface BWVideoOrientationTimeMachine : NSObject {
    NSMutableArray *_cache;
    NSUInteger _capacity;
    *opaqueCMFormatDescription _formatDescription;
    unsigned int _metadataLocalID;
    *OpaqueFigSimpleMutex _propertyMutex;
}




+(void)initialize;
-(id)_cachedItemsFromPTSSeconds:(CGFloat)arg0 toPTSSeconds:(CGFloat)arg1 ;
-(id)copyVideoOrientationSbufFromPTS:(struct ? )arg0 toPTS:(struct ? )arg1 referencePTS:(struct ? )arg2 ;
-(id)debugDescription;
-(id)initWithCapacity:(NSUInteger)arg0 formatDescription:(struct opaqueCMFormatDescription *)arg1 metadataLocalID:(unsigned int)arg2 ;
-(void)addItemToCacheWithPTS:(struct ? )arg0 exifOrientation:(short)arg1 ;
-(void)dealloc;


@end


#endif