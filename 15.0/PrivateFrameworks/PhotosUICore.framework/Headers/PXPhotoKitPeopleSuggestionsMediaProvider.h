// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOKITPEOPLESUGGESTIONSMEDIAPROVIDER_H
#define PXPHOTOKITPEOPLESUGGESTIONSMEDIAPROVIDER_H



#import "PXPeopleSuggestionsMediaProvider.h"

@interface PXPhotoKitPeopleSuggestionsMediaProvider : PXPeopleSuggestionsMediaProvider



-(int)requestImageForPersonSuggestion:(id)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 cropFactor:(NSUInteger)arg3 style:(NSUInteger)arg4 completionBlock:(id)arg5 ;
-(void)cancelRequest:(int)arg0 ;


@end


#endif