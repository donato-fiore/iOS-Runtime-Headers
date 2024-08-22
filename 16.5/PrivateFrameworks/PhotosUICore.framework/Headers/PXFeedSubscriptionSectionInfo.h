// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDSUBSCRIPTIONSECTIONINFO_H
#define PXFEEDSUBSCRIPTIONSECTIONINFO_H



#import "PXFeedAssetsSectionInfo.h"

@interface PXFeedSubscriptionSectionInfo : PXFeedAssetsSectionInfo



-(BOOL)isMine;
-(NSInteger)sectionType;
-(void)updateFromCloudFeedEntry;


@end


#endif