// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFEMAILSETENUMERATOR_H
#define _MFEMAILSETENUMERATOR_H

@class NSEnumerator;


#import "MFEmailSet.h"

@interface _MFEmailSetEnumerator : NSEnumerator {
    MFEmailSet *_set;
    ? _state;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithSet:(id)arg0 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif