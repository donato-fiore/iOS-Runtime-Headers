// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFETCHDEVICESREQUEST_H
#define CRKFETCHDEVICESREQUEST_H

@class CATTaskRequest, NSArray;



@interface CRKFetchDevicesRequest : CATTaskRequest

@property (copy, nonatomic) NSArray *deviceIdentifiers; // ivar: _deviceIdentifiers


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif