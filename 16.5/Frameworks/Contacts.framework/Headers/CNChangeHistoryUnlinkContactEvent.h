// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCHANGEHISTORYUNLINKCONTACTEVENT_H
#define CNCHANGEHISTORYUNLINKCONTACTEVENT_H



#import "CNChangeHistoryEvent.h"
#import "CNContact.h"

@interface CNChangeHistoryUnlinkContactEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *contact; // ivar: _contact


+(BOOL)supportsSecureCoding;
+(NSUInteger)instanceSortOrder;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)comparisonResultWithinSameClass:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 ;
-(void)acceptEventVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif