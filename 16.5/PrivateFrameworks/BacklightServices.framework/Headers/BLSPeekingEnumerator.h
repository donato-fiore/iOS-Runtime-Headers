// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSPEEKINGENUMERATOR_H
#define BLSPEEKINGENUMERATOR_H

@class NSEnumerator;



@interface BLSPeekingEnumerator : NSEnumerator {
    NSEnumerator *_enumerator;
    id *_peekedObject;
}




+(id)peekingEnumeratorWithEnumerator:(id)arg0 ;
-(id)nextObject;
-(id)peekNextObject;


@end


#endif