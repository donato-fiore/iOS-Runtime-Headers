// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2DELETECHILDCONTEXT_H
#define NEIKEV2DELETECHILDCONTEXT_H



#import "NEIKEv2RequestContext.h"

@interface NEIKEv2DeleteChildContext : NEIKEv2RequestContext

@property (nonatomic) unsigned int childID; // ivar: _childID


-(id)description;
-(id)initWithDeleteChildID:(unsigned int)arg0 ;


@end


#endif