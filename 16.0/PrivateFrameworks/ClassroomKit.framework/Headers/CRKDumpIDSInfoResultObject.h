// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKDUMPIDSINFORESULTOBJECT_H
#define CRKDUMPIDSINFORESULTOBJECT_H

@class CATTaskResultObject, NSDictionary;



@interface CRKDumpIDSInfoResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *info; // ivar: _info


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif