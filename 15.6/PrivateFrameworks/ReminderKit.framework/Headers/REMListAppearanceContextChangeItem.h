// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMLISTAPPEARANCECONTEXTCHANGEITEM_H
#define REMLISTAPPEARANCECONTEXTCHANGEITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "REMListBadge.h"
#import "REMListChangeItem.h"

@interface REMListAppearanceContextChangeItem : NSObject

@property (copy, nonatomic) REMListBadge *badge;
@property (copy, nonatomic) NSString *badgeEmblem;
@property (retain, nonatomic) REMListChangeItem *listChangeItem; // ivar: _listChangeItem


-(BOOL)showingLargeAttachments;
-(id)initWithListChangeItem:(id)arg0 ;
-(void)setShowingLargeAttachments:(BOOL)arg0 ;


@end


#endif