// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKIFADDRSENUMERATOR_H
#define CRKIFADDRSENUMERATOR_H

@class NSEnumerator;


#import "CRKIfaddrs.h"

@interface CRKIfaddrsEnumerator : NSEnumerator {
    ? mInterfaces;
    CRKIfaddrs *mCurrentInterface;
}




+(id)enumeratorWithError:(*id)arg0 ;
+(id)internetInterfaceEnumeratorWithError:(*id)arg0 ;
-(id)init;
-(id)initWithError:(*id)arg0 ;
-(id)initWithInterfaces:(struct ifaddrs *)arg0 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif