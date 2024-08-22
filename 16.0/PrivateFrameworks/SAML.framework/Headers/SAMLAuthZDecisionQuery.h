// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMLAUTHZDECISIONQUERY_H
#define SAMLAUTHZDECISIONQUERY_H

@class NSString;


#import "XMLWrapperDoc.h"
#import "SAMLAuthZDecisionQueryElement.h"

@interface SAMLAuthZDecisionQuery : XMLWrapperDoc

@property (readonly, nonatomic) NSString *channelId;
@property (retain, nonatomic) SAMLAuthZDecisionQueryElement *requestElement; // ivar: _requestElement


-(id)initWithData:(id)arg0 schema:(id)arg1 error:(*id)arg2 ;
-(id)initWithElement:(id)arg0 schema:(id)arg1 error:(*id)arg2 ;
-(void)addAction:(id)arg0 ;
-(void)setResource:(id)arg0 ;
-(void)setSubjectFromResponse:(id)arg0 ;


@end


#endif