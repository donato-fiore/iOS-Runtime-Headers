// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMRESULTLINKEXISTS_H
#define MCMRESULTLINKEXISTS_H



#import "MCMResultBase.h"

@interface MCMResultLinkExists : MCMResultBase

@property (readonly, nonatomic) BOOL exists; // ivar: _exists


-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(id)initWithExists:(BOOL)arg0 ;


@end


#endif