// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCPCSCHAINBREADTHENUMERATOR_H
#define BRCPCSCHAINBREADTHENUMERATOR_H

@class NSEnumerator, PQLResultSet<PQLEnumeration>;


#import "BRCPCSChainInfo.h"

@interface BRCPCSChainBreadthEnumerator : NSEnumerator {
    BRCPCSChainInfo *_chainInfo;
    PQLResultSet<PQLEnumeration> *_enumerator;
}




-(id)chainInfo;
-(id)initWithPCSChainInfo:(id)arg0 clientZone:(id)arg1 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif