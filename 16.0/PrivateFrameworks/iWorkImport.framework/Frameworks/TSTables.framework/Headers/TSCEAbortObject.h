// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEABORTOBJECT_H
#define TSCEABORTOBJECT_H


#import <Foundation/Foundation.h>


@interface TSCEAbortObject : NSObject

@property (readonly) BOOL isAborted; // ivar: _isAborted


-(id)initWithSecondsTillAbort:(int)arg0 ;


@end


#endif