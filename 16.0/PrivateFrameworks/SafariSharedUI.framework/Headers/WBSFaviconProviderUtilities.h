// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFAVICONPROVIDERUTILITIES_H
#define WBSFAVICONPROVIDERUTILITIES_H


#import <Foundation/Foundation.h>


@interface WBSFaviconProviderUtilities : NSObject



+(BOOL)isFaviconSize:(struct CGSize )arg0 morePreferrableThanFaviconSize:(struct CGSize )arg1 givenDesiredSize:(struct CGSize )arg2 ;
+(NSInteger)computeRelativeSize:(struct CGSize )arg0 referenceSize:(struct CGSize )arg1 ;
+(id)imageWithURL:(id)arg0 closetToPreferredSize:(struct CGSize )arg1 ;
+(id)multiResolutionImageFromImageData:(id)arg0 withPreferredSize:(struct CGSize )arg1 atScales:(id)arg2 didGenerateResolutions:(*BOOL)arg3 ;
+(struct CGSize )sizeOfImageWithData:(id)arg0 closestToPreferredSize:(struct CGSize )arg1 isMultiResolution:(*BOOL)arg2 ;


@end


#endif