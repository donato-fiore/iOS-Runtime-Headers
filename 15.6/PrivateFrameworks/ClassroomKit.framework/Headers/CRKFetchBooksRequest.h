// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFETCHBOOKSREQUEST_H
#define CRKFETCHBOOKSREQUEST_H

@class CATTaskRequest;



@interface CRKFetchBooksRequest : CATTaskRequest

@property (nonatomic) BOOL includeImages; // ivar: _includeImages


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif