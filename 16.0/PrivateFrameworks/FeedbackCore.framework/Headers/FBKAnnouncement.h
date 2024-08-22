// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKANNOUNCEMENT_H
#define FBKANNOUNCEMENT_H

@class NSString, NSDate;
@protocol FBKSearchableDocument;


#import "FBKManagedFeedbackObject.h"
#import "FBKContentItem.h"

@interface FBKAnnouncement : FBKManagedFeedbackObject <FBKSearchableDocument>



@property (retain) NSString *body;
@property (retain) NSString *cachedFullHTMLContent; // ivar: cachedFullHTMLContent
@property (retain) FBKContentItem *contentItem;
@property (retain) NSDate *createdAt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isStub;
@property (retain) NSString *searchText;
@property (readonly) Class superclass;
@property (retain) NSString *title;
@property (retain) NSString *type;
@property BOOL unread;
@property (retain) NSDate *updatedAt;


+(id)entityName;
-(id)fullHTMLContent;
-(id)generateSearchText;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif