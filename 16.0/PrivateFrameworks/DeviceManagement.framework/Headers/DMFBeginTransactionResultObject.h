// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFBEGINTRANSACTIONRESULTOBJECT_H
#define DMFBEGINTRANSACTIONRESULTOBJECT_H

@class CATTaskResultObject, NSUUID;



@interface DMFBeginTransactionResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif