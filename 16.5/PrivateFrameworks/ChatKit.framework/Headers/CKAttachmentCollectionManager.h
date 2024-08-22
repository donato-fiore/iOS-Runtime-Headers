// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKATTACHMENTCOLLECTIONMANAGER_H
#define CKATTACHMENTCOLLECTIONMANAGER_H

@class IMChat, NSArray, NSSet;
@protocol CKAttachmentCollectionManagerDelegate;

#import <Foundation/Foundation.h>


@interface CKAttachmentCollectionManager : NSObject

@property (retain, nonatomic) IMChat *chat; // ivar: _chat
@property (weak, nonatomic) NSObject<CKAttachmentCollectionManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *otherContentsItems; // ivar: _otherContentsItems
@property (retain, nonatomic) NSSet *photoTransferGUIDs; // ivar: _photoTransferGUIDs
@property (retain, nonatomic) NSArray *photosVideosItems; // ivar: _photosVideosItems
@property (retain, nonatomic) NSArray *webLinksItems; // ivar: _webLinksItems


-(id)guidFromChatItem:(id)arg0 ;
-(id)initWithChat:(id)arg0 ;
-(id)initWithChat:(id)arg0 photoTransferGUIDs:(id)arg1 ;
-(void)chatItemsChanged:(id)arg0 ;
-(void)dealloc;
-(void)deleteAttachmentItems:(id)arg0 ;
-(void)updateCollections;


@end


#endif