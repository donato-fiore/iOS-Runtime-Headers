// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLPOINTER_H
#define TMLPOINTER_H

@protocol TMLPointerJSExports;

#import <Foundation/Foundation.h>


@interface TMLPointer : NSObject <TMLPointerJSExports>



@property (nonatomic) id *pointee;
@property (copy, nonatomic) id *readBlock; // ivar: _readBlock
@property (copy, nonatomic) id *writeBlock; // ivar: _writeBlock


// +(id)pointerWithReadBlock:(id)arg0 writeBlock:(unk)arg1  ;


@end


#endif