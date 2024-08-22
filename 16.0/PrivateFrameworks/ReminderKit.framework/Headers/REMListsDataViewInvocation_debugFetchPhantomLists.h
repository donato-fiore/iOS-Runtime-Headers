// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMLISTSDATAVIEWINVOCATION_DEBUGFETCHPHANTOMLISTS_H
#define REMLISTSDATAVIEWINVOCATION_DEBUGFETCHPHANTOMLISTS_H

@protocol NSSecureCoding;


#import "REMStoreInvocation.h"

@interface REMListsDataViewInvocation_debugFetchPhantomLists : REMStoreInvocation <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif