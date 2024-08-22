// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CERTINFOBASICTRUSTDESCRIPTION_H
#define CERTINFOBASICTRUSTDESCRIPTION_H

@class NSString;
@protocol CertInfoTrustDescription;

#import <Foundation/Foundation.h>


@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription>

 {
    *__SecTrust _trust;
    int _action;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isRootCertificate;
-(BOOL)isTrusted;
-(NSUInteger)certificateCount;
-(id)_expirationDate;
-(id)certificateExpirationDateAtIndex:(NSUInteger)arg0 ;
-(id)certificateIssuerSummaryAtIndex:(NSUInteger)arg0 ;
-(id)certificatePropertiesAtIndex:(NSUInteger)arg0 ;
-(id)certificateSubjectSummaryAtIndex:(NSUInteger)arg0 ;
-(id)initWithTrust:(struct __SecTrust *)arg0 action:(int)arg1 ;
-(id)summaryDescriptionItems;
-(id)summarySubtitle;
-(id)summaryTitle;
-(void)dealloc;


@end


#endif