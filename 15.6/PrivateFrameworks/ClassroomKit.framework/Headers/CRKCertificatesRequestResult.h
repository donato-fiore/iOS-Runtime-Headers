// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCERTIFICATESREQUESTRESULT_H
#define CRKCERTIFICATESREQUESTRESULT_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKCertificatesRequestResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *certificateDataCollection; // ivar: _certificateDataCollection
@property (readonly, nonatomic, getter=isValidRequest) BOOL validRequest; // ivar: _validRequest


+(BOOL)supportsSecureCoding;
+(id)invalidResult;
+(id)resultWithCertificateDataCollection:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIsValidRequest:(BOOL)arg0 certificateDataCollection:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif