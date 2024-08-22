// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSSTATE_H
#define MPSSTATE_H

@class NSString;
@protocol MTLResource;

#import <Foundation/Foundation.h>


@interface MPSState : NSObject {
    *void _resources;
    NSString *_label;
    unsigned short _flags;
    BOOL _updatedAlready;
}


@property (readonly, nonatomic) BOOL isTemporary;
@property (copy) NSString *label;
@property (nonatomic) NSUInteger readCount; // ivar: _readCount
@property (readonly, retain, nonatomic) NSObject<MTLResource> *resource;
@property (readonly, nonatomic) NSUInteger resourceCount; // ivar: _resourceCount


+(id)temporaryStateWithCommandBuffer:(id)arg0 ;
+(id)temporaryStateWithCommandBuffer:(id)arg0 bufferSize:(NSUInteger)arg1 ;
+(id)temporaryStateWithCommandBuffer:(id)arg0 resourceList:(id)arg1 ;
+(id)temporaryStateWithCommandBuffer:(id)arg0 textureDescriptor:(id)arg1 ;
-(NSUInteger)bufferSizeAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)resourceTypeAtIndex:(NSUInteger)arg0 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 forKernel:(id)arg2 suggestedDescriptor:(id)arg3 ;
-(id)initWithDevice:(id)arg0 bufferSize:(NSUInteger)arg1 ;
-(id)initWithDevice:(id)arg0 resourceList:(id)arg1 ;
-(id)initWithDevice:(id)arg0 textureDescriptor:(id)arg1 ;
-(id)initWithResource:(id)arg0 ;
-(id)initWithResources:(id)arg0 ;
-(id)resourceAtIndex:(NSUInteger)arg0 allocateMemory:(BOOL)arg1 ;
-(struct MPSStateTextureInfo )textureInfoAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)synchronizeOnCommandBuffer:(id)arg0 ;


@end


#endif