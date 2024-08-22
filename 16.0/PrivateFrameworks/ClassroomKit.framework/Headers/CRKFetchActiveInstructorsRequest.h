// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKFETCHACTIVEINSTRUCTORSREQUEST_H
#define CRKFETCHACTIVEINSTRUCTORSREQUEST_H

@class CATTaskRequest;



@interface CRKFetchActiveInstructorsRequest : CATTaskRequest

@property (nonatomic) BOOL includeImages; // ivar: _includeImages


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif