// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPATHENUMERATOR_H
#define BMPATHENUMERATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BMPathEnumerator : NSObject {
    NSString *_path;
    _NSRange _range;
}




-(id)initWithPath:(id)arg0 ;
-(id)navigateDown;
-(id)navigateUp;
-(id)peekPath;


@end


#endif