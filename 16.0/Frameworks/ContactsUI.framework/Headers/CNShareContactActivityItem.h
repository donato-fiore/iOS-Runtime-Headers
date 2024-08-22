// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNSHARECONTACTACTIVITYITEM_H
#define CNSHARECONTACTACTIVITYITEM_H

@class CNContactFormatter, NSArray, NSString, LPFileMetadata, LPLinkMetadata;
@protocol UIActivityItemSource, UIActivityItemSourceAttachment, UIActivityItemLinkPresentationSource;

#import <Foundation/Foundation.h>


@interface CNShareContactActivityItem : NSObject <UIActivityItemSource, UIActivityItemSourceAttachment, UIActivityItemLinkPresentationSource>



@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) LPFileMetadata *fileMetadata; // ivar: _fileMetadata
@property (retain, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata; // ivar: _linkMetadata
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 attachmentNameForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 thumbnailImageForActivityType:(id)arg1 suggestedSize:(struct CGSize )arg2 ;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg0 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)displayString;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContacts:(id)arg0 inGroupNamed:(id)arg1 ;
-(id)thumbnailImage;


@end


#endif