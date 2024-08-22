// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDINVITATIONSECTIONINFO_H
#define PXFEEDINVITATIONSECTIONINFO_H



#import "PXFeedSectionInfo.h"

@interface PXFeedInvitationSectionInfo : PXFeedSectionInfo



-(NSInteger)sectionType;
-(NSInteger)typeForItemAtIndex:(NSInteger)arg0 ;
-(void)updateFromCloudFeedEntry;


@end


#endif