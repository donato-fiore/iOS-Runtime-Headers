// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFALLBACKSNAPSHOTDATAPROVIDER_H
#define SBFALLBACKSNAPSHOTDATAPROVIDER_H

@class FBSceneSnapshot, UIImage, IOSurface, XBSnapshotDataProviderContext, NSString;
@protocol XBSnapshotDataProvider;

#import <Foundation/Foundation.h>


@interface SBFallbackSnapshotDataProvider : NSObject <XBSnapshotDataProvider>

 {
    FBSceneSnapshot *_snapshot;
    CGFloat _scaleFactor;
    UIImage *_cachedImage;
    IOSurface *_processedSurface;
}


@property (readonly, retain, nonatomic) XBSnapshotDataProviderContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)IOSurfaceForFormat:(NSInteger)arg0 ;
-(id)fetchImageForFormat:(NSInteger)arg0 ;
-(id)initWithSceneSnapshot:(id)arg0 scaleFactor:(CGFloat)arg1 ;
-(void)_invalidateSnapshotData;


@end


#endif