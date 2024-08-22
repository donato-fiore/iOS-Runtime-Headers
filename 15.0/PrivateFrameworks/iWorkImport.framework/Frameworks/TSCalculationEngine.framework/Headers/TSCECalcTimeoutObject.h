// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCECALCTIMEOUTOBJECT_H
#define TSCECALCTIMEOUTOBJECT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSCECalcTimeoutObject : NSObject

@property (readonly) NSString *blockingIdentifier; // ivar: _blockingIdentifier
@property (readonly) CGFloat timeoutInterval; // ivar: _timeoutInterval


-(id)initWithTimeout:(CGFloat)arg0 ;


@end


#endif