// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFSCHEDULEOSUPDATERESULTOBJECT_H
#define DMFSCHEDULEOSUPDATERESULTOBJECT_H

@class CATTaskResultObject, NSError, NSString;



@interface DMFScheduleOSUpdateResultObject : CATTaskResultObject

@property (readonly, nonatomic) NSUInteger action; // ivar: _action
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) NSString *productKey; // ivar: _productKey


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAction:(NSUInteger)arg0 productKey:(id)arg1 error:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif