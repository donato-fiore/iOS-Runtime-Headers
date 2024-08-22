// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMAGESTORE_H
#define IMAGESTORE_H


#import <Foundation/Foundation.h>


@interface ImageStore : NSObject



+(CGFloat)informationDiagramBaseImageCenterOffset:(unsigned int)arg0 small:(BOOL)arg1 ;
+(CGFloat)informationDiagramBaseImageRightEdgeInset:(unsigned int)arg0 small:(BOOL)arg1 ;
+(id)imageForBaseStationWithProductID:(unsigned int)arg0 subProductID:(unsigned int)arg1 deviceKind:(int)arg2 small:(BOOL)arg3 cropped:(BOOL)arg4 threeDee:(BOOL)arg5 ;
+(id)imageForInformationalDiagram:(unsigned int)arg0 ;
+(id)imageForInformationalDiagram:(unsigned int)arg0 subProductID:(unsigned int)arg1 deviceKind:(int)arg2 audioImage:(BOOL)arg3 small:(BOOL)arg4 ;
+(id)imageForInformationalDiagramNamed:(id)arg0 small:(BOOL)arg1 ;
+(id)imageNameForInformationalDiagram:(unsigned int)arg0 subProductID:(unsigned int)arg1 deviceKind:(int)arg2 audioImage:(BOOL)arg3 small:(BOOL)arg4 useDataCache:(*BOOL)arg5 ;
+(id)imageNameForProductID:(unsigned int)arg0 subProductID:(unsigned int)arg1 deviceKind:(int)arg2 small:(BOOL)arg3 cropped:(BOOL)arg4 threeDee:(BOOL)arg5 ;
+(id)imageNamed:(id)arg0 ;
+(id)imageNamed:(id)arg0 inBundle:(id)arg1 ;
+(id)imageNamed:(id)arg0 inBundle:(id)arg1 ofType:(id)arg2 ;
+(id)insetImageForInformationalDiagram:(unsigned int)arg0 ;
+(id)insetImageForInformationalDiagram:(unsigned int)arg0 deviceKind:(int)arg1 audioImage:(BOOL)arg2 small:(BOOL)arg3 ;
+(id)kitImageOfType:(NSInteger)arg0 ;
+(id)sharedImageStore;
+(struct CGImage *)cgImageFromImage:(id)arg0 forContentsScale:(CGFloat)arg1 ;


@end


#endif