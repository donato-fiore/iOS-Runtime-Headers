// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2NEWCHILDCONTEXT_H
#define NEIKEV2NEWCHILDCONTEXT_H



#import "NEIKEv2RequestContext.h"
#import "NEIKEv2ChildSA.h"

@interface NEIKEv2NewChildContext : NEIKEv2RequestContext

@property (retain, nonatomic) NEIKEv2ChildSA *childSA; // ivar: _childSA


-(id)description;
-(id)initWithChildSA:(id)arg0 ;


@end


#endif