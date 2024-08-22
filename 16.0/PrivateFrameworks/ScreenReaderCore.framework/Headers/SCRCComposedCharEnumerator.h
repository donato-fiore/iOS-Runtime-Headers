// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCRCCOMPOSEDCHARENUMERATOR_H
#define SCRCCOMPOSEDCHARENUMERATOR_H

@class NSEnumerator, NSString;



@interface SCRCComposedCharEnumerator : NSEnumerator {
    BOOL _done;
    NSString *_string;
    NSUInteger _indexOfCurrentComposedCharacter;
}




-(id)allObjects;
-(id)initWithString:(id)arg0 ;
-(id)nextObject;


@end


#endif