// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHOSUPDATESTATUSRESULTOBJECT_H
#define DMFFETCHOSUPDATESTATUSRESULTOBJECT_H

@class CATTaskResultObject, NSString;



@interface DMFFetchOSUpdateStatusResultObject : CATTaskResultObject

@property (nonatomic) CGFloat downloadPercentComplete; // ivar: _downloadPercentComplete
@property (copy, nonatomic) NSString *productKey; // ivar: _productKey
@property (nonatomic) NSUInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
+(id)descriptionForStatus:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProductKey:(id)arg0 status:(NSUInteger)arg1 downloadPercentComplete:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif