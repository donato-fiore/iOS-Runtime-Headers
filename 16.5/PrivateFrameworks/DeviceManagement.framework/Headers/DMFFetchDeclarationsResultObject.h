// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFFETCHDECLARATIONSRESULTOBJECT_H
#define DMFFETCHDECLARATIONSRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface DMFFetchDeclarationsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *payloadDescriptions; // ivar: _payloadDescriptions


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif