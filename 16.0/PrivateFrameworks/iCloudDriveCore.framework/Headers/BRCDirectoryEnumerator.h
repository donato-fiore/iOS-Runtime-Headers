// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCDIRECTORYENUMERATOR_H
#define BRCDIRECTORYENUMERATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface BRCDirectoryEnumerator : NSObject {
    NSMutableArray *_stack;
    BOOL _recursive;
    *int _err;
}




-(id)initForEnumeratingBelow:(id)arg0 recursive:(BOOL)arg1 error:(*int)arg2 ;
-(id)nextObject;


@end


#endif