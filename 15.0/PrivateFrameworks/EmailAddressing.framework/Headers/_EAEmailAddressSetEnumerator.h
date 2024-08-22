// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EAEMAILADDRESSSETENUMERATOR_H
#define _EAEMAILADDRESSSETENUMERATOR_H

@class NSEnumerator;


#import "EAEmailAddressSet.h"

@interface _EAEmailAddressSetEnumerator : NSEnumerator {
    EAEmailAddressSet *_set;
    ? _state;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithSet:(id)arg0 ;
-(id)nextObject;


@end


#endif