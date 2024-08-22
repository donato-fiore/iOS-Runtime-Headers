// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMRESULTCONTAINERFROMPATH_H
#define MCMRESULTCONTAINERFROMPATH_H

@class NSString;


#import "MCMResultWithContainerBase.h"

@interface MCMResultContainerFromPath : MCMResultWithContainerBase

@property (retain, nonatomic) NSString *relativePath; // ivar: _relativePath


-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(id)initWithUUID:(id)arg0 containerPathIdentifier:(id)arg1 identifier:(id)arg2 containerClass:(NSUInteger)arg3 POSIXUser:(id)arg4 personaUniqueString:(id)arg5 sandboxToken:(char *)arg6 existed:(BOOL)arg7 url:(id)arg8 info:(id)arg9 resolvedLinks:(id)arg10 transient:(BOOL)arg11 relativePath:(id)arg12 ;


@end


#endif