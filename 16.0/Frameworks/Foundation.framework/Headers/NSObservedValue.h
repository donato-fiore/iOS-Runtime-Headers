// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSOBSERVEDVALUE_H
#define NSOBSERVEDVALUE_H


#import <Foundation/Foundation.h>

#import "NSError.h"

@interface NSObservedValue : NSObject {
    id *_contents;
    id *_lastOriginator;
    int _tag;
}


@property (retain) NSError *error;
@property BOOL finished;
@property (retain) id *value;


-(BOOL)_isToManyChangeInformation;
-(id)copyToHeap;
-(id)debugDescription;
-(id)description;
-(void)dealloc;


@end


#endif