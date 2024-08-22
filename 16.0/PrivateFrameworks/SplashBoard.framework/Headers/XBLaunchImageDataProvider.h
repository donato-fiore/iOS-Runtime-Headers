// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XBLAUNCHIMAGEDATAPROVIDER_H
#define XBLAUNCHIMAGEDATAPROVIDER_H

@class _FBSSnapshot, UIImage, NSString;
@protocol XBSnapshotDataProvider;

#import <Foundation/Foundation.h>

#import "XBSnapshotDataProviderContext.h"

@interface XBLaunchImageDataProvider : NSObject <XBSnapshotDataProvider>

 {
    _FBSSnapshot *_snapshot;
    UIImage *_cachedImage;
}


@property (readonly, retain, nonatomic) XBSnapshotDataProviderContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)fetchImage;
-(id)initWithRequest:(id)arg0 contextID:(unsigned int)arg1 opaque:(BOOL)arg2 ;
-(void)invalidateImage;


@end


#endif