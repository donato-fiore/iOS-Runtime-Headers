// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIIMAGEDATAPROVIDER_H
#define SBUIIMAGEDATAPROVIDER_H

@class UIImage, XBSnapshotDataProviderContext, NSString;
@protocol XBSnapshotDataProvider;

#import <Foundation/Foundation.h>


@interface SBUIImageDataProvider : NSObject <XBSnapshotDataProvider>

 {
    UIImage *_image;
    CGFloat _scaleFactor;
}


@property (readonly, retain, nonatomic) XBSnapshotDataProviderContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)fetchImageForFormat:(NSInteger)arg0 ;
-(id)initWithImage:(id)arg0 context:(id)arg1 scaleFactor:(CGFloat)arg2 ;


@end


#endif