// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMRESULTGETCODESIGNMAPPING_H
#define MCMRESULTGETCODESIGNMAPPING_H

@class NSDictionary;


#import "MCMResultBase.h"

@interface MCMResultGetCodeSignMapping : MCMResultBase

@property (readonly, nonatomic) NSDictionary *info; // ivar: _info


-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(id)initWithInfo:(id)arg0 ;


@end


#endif