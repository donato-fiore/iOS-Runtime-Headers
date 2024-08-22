// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCHATITEM_H
#define IMCHATITEM_H

@class NSString, IMItem;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IMChatItem : NSObject <NSCopying>



@property (readonly, retain, nonatomic) NSString *balloonBundleID;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canEditMessageText;
@property (readonly, nonatomic) BOOL canReply;
@property (readonly, nonatomic) BOOL canRetract;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) IMItem *item; // ivar: _item
@property (readonly, nonatomic) NSInteger syndicationBehavior;
@property (readonly, nonatomic) NSInteger syndicationType;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) BOOL wasDetonated;


-(BOOL)isEditedMessageHistory;
-(BOOL)isReplyContextPreview;
-(BOOL)itemIsThreadOriginatorWithThreadIdentifier:(*id)arg0 ;
-(id)_initWithItem:(id)arg0 ;
-(id)_parentItem;
-(id)_timeAdded;
-(id)_timeStale;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)threadGroupIdentifier;
-(void)_setTimeAdded:(id)arg0 ;


@end


#endif