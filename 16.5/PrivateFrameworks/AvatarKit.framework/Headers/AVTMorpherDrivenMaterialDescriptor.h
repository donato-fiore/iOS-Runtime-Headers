// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTMORPHERDRIVENMATERIALDESCRIPTOR_H
#define AVTMORPHERDRIVENMATERIALDESCRIPTOR_H

@class SCNNode, SCNMaterial, NSString;

#import <Foundation/Foundation.h>


@interface AVTMorpherDrivenMaterialDescriptor : NSObject {
    SCNNode *_readMorpherNode;
    NSInteger _morphTargetIndex;
    SCNMaterial *_material;
    NSString *_propertyName;
}






@end


#endif