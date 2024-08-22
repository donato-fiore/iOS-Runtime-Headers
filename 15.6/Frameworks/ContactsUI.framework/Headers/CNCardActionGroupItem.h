// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCARDACTIONGROUPITEM_H
#define CNCARDACTIONGROUPITEM_H

@class NSArray;


#import "CNCardGroupItem.h"

@interface CNCardActionGroupItem : CNCardGroupItem

@property (readonly, nonatomic) NSArray *actions; // ivar: _actions


+(id)actionGroupItemWithAction:(id)arg0 ;
+(id)actionGroupItemWithActions:(id)arg0 ;
-(Class)cellClass;
-(id)init;
-(id)initWithAction:(id)arg0 ;
-(void)addAction:(id)arg0 ;


@end


#endif