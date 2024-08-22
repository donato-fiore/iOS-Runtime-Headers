// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSAINBOXTITLEPROVIDER_H
#define PXSAINBOXTITLEPROVIDER_H

@class NSString;
@protocol PXInboxModelTitleProvider;

#import <Foundation/Foundation.h>


@interface PXSAInboxTitleProvider : NSObject <PXInboxModelTitleProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultSubtitleAttributes;
+(id)defaultTitleAttributes;
+(id)emphasizedTitleAttributes;
+(id)supportingTextAttributes;
+(id)workQueue;
+(void)preloadResources;
-(id)_titleForCoalescedWithSectionInfo:(id)arg0 ;
-(id)_titleForCommentWithSectionInfo:(id)arg0 ;
-(id)_titleForInvitationResponseWithSectionInfo:(id)arg0 accepted:(BOOL)arg1 ;
-(id)_titleForLikeWithSectionInfo:(id)arg0 ;
-(id)subtitleForModel:(id)arg0 ;
-(id)titleForModel:(id)arg0 ;
-(void)requestTitleAndSubtitleForModel:(id)arg0 completion:(id)arg1 ;


@end


#endif