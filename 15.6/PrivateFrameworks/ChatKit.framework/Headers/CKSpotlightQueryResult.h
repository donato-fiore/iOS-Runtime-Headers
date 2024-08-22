// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSPOTLIGHTQUERYRESULT_H
#define CKSPOTLIGHTQUERYRESULT_H

@class NSString, CSSearchableItem, LPLinkMetadata, NSURL;
@protocol QLPreviewItem;

#import <Foundation/Foundation.h>

#import "CKConversation.h"

@interface CKSpotlightQueryResult : NSObject <QLPreviewItem>



@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) CSSearchableItem *item; // ivar: _item
@property (retain, nonatomic) LPLinkMetadata *linkMetadata; // ivar: _linkMetadata
@property (readonly, nonatomic) NSString *messageGUID;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithSearchableItem:(id)arg0 inSection:(id)arg1 withConversation:(id)arg2 ;


@end


#endif