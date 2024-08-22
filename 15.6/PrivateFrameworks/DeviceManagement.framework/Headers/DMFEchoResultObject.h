// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFECHORESULTOBJECT_H
#define DMFECHORESULTOBJECT_H

@class CATTaskResultObject, NSString;



@interface DMFEchoResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *echo; // ivar: _echo
@property (copy, nonatomic) NSString *resultStatus; // ivar: _resultStatus


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif