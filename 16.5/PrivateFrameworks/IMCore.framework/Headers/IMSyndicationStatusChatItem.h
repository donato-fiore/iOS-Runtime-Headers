// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSYNDICATIONSTATUSCHATITEM_H
#define IMSYNDICATIONSTATUSCHATITEM_H

@class NSString;


#import "IMMessageStatusChatItem.h"

@interface IMSyndicationStatusChatItem : IMMessageStatusChatItem

@property (readonly, copy, nonatomic) NSString *swyAppName; // ivar: _swyAppName
@property (readonly, copy, nonatomic) NSString *swyBundleID; // ivar: _swyBundleID
@property (readonly, nonatomic) NSInteger syndicationStatus; // ivar: _syndicationStatus
@property (readonly, nonatomic) BOOL wasDetectedAsSWYSpam; // ivar: _wasDetectedAsSWYSpam


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithItem:(id)arg0 withSyndicationStatus:(NSInteger)arg1 ;


@end


#endif