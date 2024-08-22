// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCONCRETEPROTOCOLCHECKER_H
#define NSCONCRETEPROTOCOLCHECKER_H

@class Protocol;

#import <Foundation/Foundation.h>

#import "NSProtocolChecker.h"

@interface NSConcreteProtocolChecker : NSProtocolChecker {
    NSObject *_target;
    Protocol *_protocol;
}




-(id)initWithTarget:(id)arg0 protocol:(id)arg1 ;
-(id)protocol;
-(id)target;
-(void)dealloc;


@end


#endif