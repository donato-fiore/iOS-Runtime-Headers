// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMLATTRIBUTEQUERY_H
#define SAMLATTRIBUTEQUERY_H

@class NSData, NSString;


#import "XMLWrapperDoc.h"
#import "SAMLAttributeQueryElement.h"

@interface SAMLAttributeQuery : XMLWrapperDoc {
    NSData *_schemaData;
}


@property (readonly, nonatomic) NSString *channelId;
@property (retain, nonatomic) SAMLAttributeQueryElement *requestElement; // ivar: _requestElement


-(id)initWithData:(id)arg0 schema:(id)arg1 error:(*id)arg2 ;
-(id)initWithElement:(id)arg0 schema:(id)arg1 error:(*id)arg2 ;
-(void)addAttribute:(id)arg0 ;
-(void)addAttribute:(id)arg0 values:(id)arg1 ;
-(void)setSubjectFromResponse:(id)arg0 ;


@end


#endif