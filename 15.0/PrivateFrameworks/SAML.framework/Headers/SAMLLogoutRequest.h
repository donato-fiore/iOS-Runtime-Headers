// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMLLOGOUTREQUEST_H
#define SAMLLOGOUTREQUEST_H

@class NSData, NSString, NSDate;


#import "XMLWrapperDoc.h"
#import "SAMLLogoutRequestElement.h"

@interface SAMLLogoutRequest : XMLWrapperDoc {
    NSData *_schemaData;
}


@property (retain, nonatomic) NSString *issuer;
@property (retain, nonatomic) NSDate *notOnOrAfter;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) SAMLLogoutRequestElement *requestElement; // ivar: _requestElement


-(id)initWithData:(id)arg0 schema:(id)arg1 error:(*id)arg2 ;
-(id)initWithElement:(id)arg0 schema:(id)arg1 error:(*id)arg2 ;


@end


#endif