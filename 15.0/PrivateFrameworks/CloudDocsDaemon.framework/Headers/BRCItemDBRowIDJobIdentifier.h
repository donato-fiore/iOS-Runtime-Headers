// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCITEMDBROWIDJOBIDENTIFIER_H
#define BRCITEMDBROWIDJOBIDENTIFIER_H

@class NSString;
@protocol BRCJobIdentifying;

#import <Foundation/Foundation.h>


@interface BRCItemDBRowIDJobIdentifier : NSObject <BRCJobIdentifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger itemDBRowID; // ivar: _itemDBRowID
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItemDBRowIDIdentifier:(id)arg0 ;
-(id)columns;
-(id)columnsValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithItemDBRowID:(NSInteger)arg0 ;
-(id)jobsDescription;
-(id)matchingJobsWhereSQLClause;


@end


#endif