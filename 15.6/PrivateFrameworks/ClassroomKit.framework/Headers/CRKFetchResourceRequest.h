// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFETCHRESOURCEREQUEST_H
#define CRKFETCHRESOURCEREQUEST_H

@class CATTaskRequest, NSURL;



@interface CRKFetchResourceRequest : CATTaskRequest

@property (copy, nonatomic) NSURL *resourceURL; // ivar: _resourceURL


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif