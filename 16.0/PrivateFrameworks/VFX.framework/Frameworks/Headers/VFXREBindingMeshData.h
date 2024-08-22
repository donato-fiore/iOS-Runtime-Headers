// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VFXREBINDINGMESHDATA_H
#define VFXREBINDINGMESHDATA_H

@protocol MTLBuffer;

#import <Foundation/Foundation.h>


@interface VFXREBindingMeshData : NSObject

@property (nonatomic, retain) NSObject<MTLBuffer> *buffer; // ivar: buffer
@property (nonatomic) NSUInteger format; // ivar: format
@property (nonatomic) unsigned int length; // ivar: length
@property (nonatomic) unsigned short offset; // ivar: offset
@property (nonatomic) unsigned short stride; // ivar: stride


-(id)init;


@end


#endif