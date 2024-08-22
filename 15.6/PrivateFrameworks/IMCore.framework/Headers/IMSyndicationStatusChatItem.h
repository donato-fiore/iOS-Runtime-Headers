// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSYNDICATIONSTATUSCHATITEM_H
#define IMSYNDICATIONSTATUSCHATITEM_H



#import "IMMessageStatusChatItem.h"

@interface IMSyndicationStatusChatItem : IMMessageStatusChatItem

@property (readonly, nonatomic) NSInteger syndicationStatus; // ivar: _syndicationStatus


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithItem:(id)arg0 withSyndicationStatus:(NSInteger)arg1 ;


@end


#endif