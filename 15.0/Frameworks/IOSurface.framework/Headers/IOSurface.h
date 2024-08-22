// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOSURFACE_H
#define IOSURFACE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IOSurface : NSObject <NSSecureCoding>

 {
    *void _impl;
}


@property (readonly) NSInteger allocationSize;
@property (readonly) BOOL allowsPixelSizeCasting;
@property (readonly) *void baseAddress;
@property (readonly) NSInteger bytesPerElement;
@property (readonly) NSInteger bytesPerRow;
@property (readonly) NSInteger elementHeight;
@property (readonly) NSInteger elementWidth;
@property (readonly) NSInteger height;
@property (readonly, getter=isInUse) BOOL inUse;
@property (readonly) int localUseCount;
@property (readonly) unsigned int pixelFormat;
@property (readonly) NSUInteger planeCount;
@property (readonly) unsigned int seed;
@property (readonly) NSInteger width;


+(BOOL)supportsSecureCoding;
-(*void)baseAddressOfPlaneAtIndex:(NSUInteger)arg0 ;
-(BOOL)isDisplayable;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSysMemOnly;
-(BOOL)supportsProtectionOptions:(NSUInteger)arg0 ;
-(NSInteger)bytesPerElementOfPlaneAtIndex:(NSUInteger)arg0 ;
-(NSInteger)bytesPerRowOfPlaneAtIndex:(NSUInteger)arg0 ;
-(NSInteger)elementHeightOfPlaneAtIndex:(NSUInteger)arg0 ;
-(NSInteger)elementWidthOfPlaneAtIndex:(NSUInteger)arg0 ;
-(NSInteger)heightOfPlaneAtIndex:(NSUInteger)arg0 ;
-(NSInteger)widthOfPlaneAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)_cfTypeID;
-(NSUInteger)hash;
-(NSUInteger)protectionOptions;
-(NSUInteger)registryID;
-(NSUInteger)timestampAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)traceID;
-(id)allAttachments;
-(id)attachmentForKey:(id)arg0 ;
-(id)initWithClientBuffer:(struct __IOSurfaceClient *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMachPort:(unsigned int)arg0 ;
-(id)initWithProperties:(id)arg0 ;
-(id)initWithSurfaceID:(unsigned int)arg0 ;
-(id)newChildSurfaceWithProperties:(id)arg0 ;
-(id)newWiringAssertion;
-(int)lockWithOptions:(unsigned int)arg0 seed:(*unsigned int)arg1 ;
-(int)setPurgeable:(unsigned int)arg0 oldState:(*unsigned int)arg1 ;
-(int)unlockWithOptions:(unsigned int)arg0 seed:(*unsigned int)arg1 ;
-(void)dealloc;
-(void)decrementUseCount;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementUseCount;
-(void)removeAllAttachments;
-(void)removeAttachmentForKey:(id)arg0 ;
-(void)setAllAttachments:(id)arg0 ;
-(void)setAttachment:(id)arg0 forKey:(id)arg1 ;
-(void)setTimestamp:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif