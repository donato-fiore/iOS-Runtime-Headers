// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKFETCHCHAPTERSREQUEST_H
#define CRKFETCHCHAPTERSREQUEST_H

@class CATTaskRequest, NSString;



@interface CRKFetchChaptersRequest : CATTaskRequest

@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *identifierType; // ivar: _identifierType
@property (copy, nonatomic) NSString *path; // ivar: _path


+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif