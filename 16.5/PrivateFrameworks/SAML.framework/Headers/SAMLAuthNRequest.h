// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMLAUTHNREQUEST_H
#define SAMLAUTHNREQUEST_H

@class NSData, NSString;


#import "XMLWrapperDoc.h"
#import "SAMLAuthNRequestElement.h"

@interface SAMLAuthNRequest : XMLWrapperDoc {
    NSData *_schemaData;
}


@property (retain, nonatomic) NSString *issuer;
@property (retain, nonatomic) SAMLAuthNRequestElement *requestElement; // ivar: _requestElement


-(id)initWithData:(id)arg0 schema:(id)arg1 error:(*id)arg2 ;
-(id)initWithElement:(id)arg0 schema:(id)arg1 error:(*id)arg2 ;
-(void)setForceAuthN:(BOOL)arg0 ;
-(void)setIsPassive:(BOOL)arg0 ;
-(void)setProviderName:(id)arg0 ;
-(void)setSubjectFromResponse:(id)arg0 ;


@end


#endif