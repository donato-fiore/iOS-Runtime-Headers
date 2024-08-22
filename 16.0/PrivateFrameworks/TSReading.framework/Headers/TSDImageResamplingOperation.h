// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDIMAGERESAMPLINGOPERATION_H
#define TSDIMAGERESAMPLINGOPERATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TSDImageProvider.h"
#import "TSPObjectContext.h"

@interface TSDImageResamplingOperation : NSObject

@property (nonatomic) CGSize desiredSize; // ivar: mDesiredSize
@property (copy, nonatomic) NSString *displayName; // ivar: mDisplayName
@property (retain, nonatomic) TSDImageProvider *imageProvider; // ivar: mImageProvider
@property (nonatomic) *CGPath maskingPath; // ivar: mMaskingPath
@property (retain, nonatomic) TSPObjectContext *objectContext; // ivar: mObjectContext


-(id)init;
-(id)initWithImageProvider:(id)arg0 desiredSize:(struct CGSize )arg1 ;
-(id)performResampleOperationWithResampleOptions:(NSUInteger)arg0 bitmapContextOptions:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif