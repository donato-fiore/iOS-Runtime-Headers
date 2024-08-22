// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIPSDLAYERENUMERATOR_H
#define CUIPSDLAYERENUMERATOR_H

@class NSEnumerator;


#import "CUIPSDLayerGroupRef.h"

@interface CUIPSDLayerEnumerator : NSEnumerator {
    CUIPSDLayerGroupRef *_layerGroup;
    unsigned int _currentIndex;
    BOOL _isImageFile;
}




+(id)enumeratorWithPSDImage:(id)arg0 ;
+(id)enumeratorWithPSDLayerGroup:(id)arg0 ;
-(id)allObjects;
-(id)initWithPSDImage:(id)arg0 ;
-(id)initWithPSDLayerGroup:(id)arg0 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif