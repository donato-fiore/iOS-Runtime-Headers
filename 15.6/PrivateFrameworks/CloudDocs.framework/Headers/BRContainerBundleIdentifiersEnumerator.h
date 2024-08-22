// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCONTAINERBUNDLEIDENTIFIERSENUMERATOR_H
#define BRCONTAINERBUNDLEIDENTIFIERSENUMERATOR_H

@class NSEnumerator;



@interface BRContainerBundleIdentifiersEnumerator : NSEnumerator {
    NSEnumerator *_enumerator;
}




-(id)initWithContainerPlist:(id)arg0 ;
-(id)nextObject;


@end


#endif