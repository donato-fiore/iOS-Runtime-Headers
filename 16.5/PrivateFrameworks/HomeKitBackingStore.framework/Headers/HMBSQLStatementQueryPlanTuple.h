// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBSQLSTATEMENTQUERYPLANTUPLE_H
#define HMBSQLSTATEMENTQUERYPLANTUPLE_H

@class HMFObject, NSString;



@interface HMBSQLStatementQueryPlanTuple : HMFObject

@property (readonly, nonatomic) NSString *detail; // ivar: _detail
@property (readonly, nonatomic) int parent; // ivar: _parent
@property (readonly, nonatomic) int row; // ivar: _row


-(id)attributeDescriptions;
-(id)initWithRow:(id)arg0 ;


@end


#endif