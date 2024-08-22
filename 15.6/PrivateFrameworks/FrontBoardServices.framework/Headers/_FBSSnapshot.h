// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FBSSNAPSHOT_H
#define _FBSSNAPSHOT_H

@class IOSurface, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "_FBSSnapshotContext.h"

@interface _FBSSnapshot : NSObject <BSInvalidatable>

 {
    *CGImage _imageRef;
    IOSurface *_nonProtectedSurfaceRef;
    IOSurface *_protectedSurfaceRef;
}


@property (readonly, nonatomic) *CGImage CGImage;
@property (readonly, nonatomic) IOSurface *IOSurface;
@property (readonly, copy, nonatomic) _FBSSnapshotContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) IOSurface *fallbackIOSurface;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)capture;
-(CGFloat)_scale;
-(id)initWithSnapshotContext:(id)arg0 ;
-(struct CGSize )_scaledSnapshotSize;
-(void)_doInvalidate;
-(void)_synchronizedCaptureWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif