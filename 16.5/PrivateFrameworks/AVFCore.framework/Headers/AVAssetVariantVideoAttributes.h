// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETVARIANTVIDEOATTRIBUTES_H
#define AVASSETVARIANTVIDEOATTRIBUTES_H

@class FigAlternateObjC, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AVAssetVariantVideoAttributes : NSObject {
    FigAlternateObjC *_figAlternateObjC;
    *OpaqueFigSimpleMutex _mutex;
}


@property (readonly, nonatomic) NSArray *codecTypes;
@property (readonly, nonatomic) CGFloat nominalFrameRate;
@property (readonly, nonatomic) CGSize presentationSize;
@property (readonly, nonatomic) NSString *videoRange;


-(id)initWithFigAlternateObjC:(id)arg0 ;
-(void)dealloc;


@end


#endif