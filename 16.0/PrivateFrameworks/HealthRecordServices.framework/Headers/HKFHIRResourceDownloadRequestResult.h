// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFHIRRESOURCEDOWNLOADREQUESTRESULT_H
#define HKFHIRRESOURCEDOWNLOADREQUESTRESULT_H

@class NSError, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKFHIRRequestTaskEndStates.h"
#import "HKFHIRCredentialRefreshResult.h"

@interface HKFHIRResourceDownloadRequestResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKFHIRRequestTaskEndStates *endStates; // ivar: _endStates
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) HKFHIRCredentialRefreshResult *refreshResult; // ivar: _refreshResult
@property (readonly, copy, nonatomic) NSData *resourceBundleData; // ivar: _resourceBundleData


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithError:(id)arg0 endStates:(id)arg1 refreshResult:(id)arg2 ;
-(id)initWithResourceBundleData:(id)arg0 endStates:(id)arg1 refreshResult:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif