// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMCHATITEM_H
#define IMCHATITEM_H

@class IMItem, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IMChatItem : NSObject <NSCopying>

 {
    IMItem *_item;
}


@property (readonly, retain, nonatomic) NSString *balloonBundleID;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canReply;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) NSInteger syndicationBehavior;
@property (readonly, nonatomic) NSInteger syndicationType;


-(BOOL)isReplyContextPreview;
-(BOOL)itemIsReply;
-(BOOL)itemIsReplyContextPreview;
-(BOOL)itemIsReplyCount;
-(BOOL)itemIsThreadOriginator;
-(BOOL)itemIsThreadOriginatorWithThreadIdentifier:(*id)arg0 ;
-(id)_initWithItem:(id)arg0 ;
-(id)_item;
-(id)_parentItem;
-(id)_timeAdded;
-(id)_timeStale;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)threadGroupIdentifier;
-(void)_setTimeAdded:(id)arg0 ;


@end


#endif