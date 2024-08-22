// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLULOOKUPITEMDDCONTENT_H
#define MLULOOKUPITEMDDCONTENT_H

@class DDPreviewAction;


#import "MLULookupItemContent.h"

@interface MLULookupItemDDContent : MLULookupItemContent {
    DDPreviewAction *_previewAction;
}




-(NSUInteger)commitType;
-(id)commitURL;
-(id)contact;
-(id)initWithURL:(id)arg0 result:(struct __DDResult *)arg1 documentProperties:(id)arg2 ;
-(void)dismissViewController;
-(void)setupViewControllerInCommitMode;


@end


#endif