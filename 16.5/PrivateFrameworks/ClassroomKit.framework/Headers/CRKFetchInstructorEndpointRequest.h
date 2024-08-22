// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKFETCHINSTRUCTORENDPOINTREQUEST_H
#define CRKFETCHINSTRUCTORENDPOINTREQUEST_H

@class CATTaskRequest, NSURL, NSString;



@interface CRKFetchInstructorEndpointRequest : CATTaskRequest

@property (retain, nonatomic) NSURL *classroomAppBundleURL; // ivar: _classroomAppBundleURL
@property (copy, nonatomic) NSString *instructordBundleIdentifier; // ivar: _instructordBundleIdentifier


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif