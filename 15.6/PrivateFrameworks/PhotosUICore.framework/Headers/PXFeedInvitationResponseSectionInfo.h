// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFEEDINVITATIONRESPONSESECTIONINFO_H
#define PXFEEDINVITATIONRESPONSESECTIONINFO_H



#import "PXFeedSectionInfo.h"

@interface PXFeedInvitationResponseSectionInfo : PXFeedSectionInfo



-(NSInteger)sectionType;
-(NSInteger)typeForItemAtIndex:(NSInteger)arg0 ;
-(id)assets;
-(void)updateFromCloudFeedEntry;


@end


#endif