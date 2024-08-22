// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSLIVERENDEREDARMEDSTATEIMAGESET_H
#define PKPASSLIVERENDEREDARMEDSTATEIMAGESET_H



#import "PKPassLiveRenderedImageSet.h"

@interface PKPassLiveRenderedArmedStateImageSet : PKPassLiveRenderedImageSet



+(BOOL)shouldCache;
+(NSInteger)imageSetType;
+(id)archiveName;
+(unsigned int)currentVersion;
-(id)initWithDisplayProfile:(id)arg0 fileURL:(id)arg1 screenScale:(CGFloat)arg2 suffix:(id)arg3 ;


@end


#endif