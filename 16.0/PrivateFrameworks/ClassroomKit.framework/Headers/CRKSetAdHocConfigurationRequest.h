// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKSETADHOCCONFIGURATIONREQUEST_H
#define CRKSETADHOCCONFIGURATIONREQUEST_H

@class CATTaskRequest, NSDictionary;



@interface CRKSetAdHocConfigurationRequest : CATTaskRequest

@property (copy, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (nonatomic) BOOL merge; // ivar: _merge


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif