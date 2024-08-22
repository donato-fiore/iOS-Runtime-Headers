// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMLISTAPPEARANCECONTEXT_H
#define REMLISTAPPEARANCECONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "REMListBadge.h"
#import "REMList.h"

@interface REMListAppearanceContext : NSObject

@property (readonly, nonatomic) REMListBadge *badge;
@property (readonly, nonatomic) NSString *badgeEmblem;
@property (retain, nonatomic) REMList *list; // ivar: _list


-(BOOL)showingLargeAttachments;
-(id)initWithList:(id)arg0 ;


@end


#endif