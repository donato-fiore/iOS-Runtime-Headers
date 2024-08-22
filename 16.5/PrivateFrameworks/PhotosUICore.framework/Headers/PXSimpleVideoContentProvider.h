// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSIMPLEVIDEOCONTENTPROVIDER_H
#define PXSIMPLEVIDEOCONTENTPROVIDER_H

@class NSString;


#import "PXVideoContentProvider.h"
#import "PXVideoContentProviderLoadingResult.h"

@interface PXSimpleVideoContentProvider : PXVideoContentProvider {
    PXVideoContentProviderLoadingResult *_loadingResult;
    NSString *_contentIdentifier;
    CGFloat _loadingProgress;
}




-(CGFloat)loadingProgress;
-(id)contentIdentifier;
-(id)description;
-(id)init;
-(id)initWithPlayerItem:(id)arg0 contentIdentifier:(id)arg1 ;
-(id)loadingResult;
-(void)beginLoadingWithPriority:(NSInteger)arg0 ;
-(void)setLoadingProgress:(CGFloat)arg0 ;
-(void)setLoadingResult:(id)arg0 ;


@end


#endif