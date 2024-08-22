// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCENESNAPSHOTDATAPROVIDER_H
#define SBSCENESNAPSHOTDATAPROVIDER_H

@class FBSceneSnapshot, UIImage, IOSurface, XBSnapshotDataProviderContext, NSString;
@protocol XBSnapshotDataProvider;

#import <Foundation/Foundation.h>

#import "SBFallbackSnapshotDataProvider.h"

@interface SBSceneSnapshotDataProvider : NSObject <XBSnapshotDataProvider>

 {
    FBSceneSnapshot *_snapshot;
    CGFloat _scaleFactor;
    UIImage *_cachedImage;
    SBFallbackSnapshotDataProvider *_fallbackSnapshotDataProvider;
    IOSurface *_processedSurface;
    BOOL _hasProtectedContent;
}


@property (readonly, retain, nonatomic) XBSnapshotDataProviderContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasProtectedContent;
-(id)IOSurfaceForFormat:(NSInteger)arg0 ;
-(id)fallbackSnapshotDataProvider;
-(id)fetchImageForFormat:(NSInteger)arg0 ;
-(id)initWithSceneSnapshot:(id)arg0 scaleFactor:(CGFloat)arg1 ;
-(void)_invalidateSnapshotData;


@end


#endif