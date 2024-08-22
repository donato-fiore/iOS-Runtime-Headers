// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLICATIONPLACEHOLDER_H
#define SBAPPLICATIONPLACEHOLDER_H

@class SBHProxiedApplicationPlaceholder, NSString;
@protocol FBSApplicationPlaceholderObserver;



@interface SBApplicationPlaceholder : SBHProxiedApplicationPlaceholder <FBSApplicationPlaceholderObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)cancel;
-(BOOL)pause;
-(BOOL)prioritize;
-(BOOL)resume;
-(void)_reloadThumbnailImage;


@end


#endif