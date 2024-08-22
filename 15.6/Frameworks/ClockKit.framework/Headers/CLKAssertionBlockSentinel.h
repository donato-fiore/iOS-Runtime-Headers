// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKASSERTIONBLOCKSENTINEL_H
#define CLKASSERTIONBLOCKSENTINEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CLKAssertionBlockSentinel : NSObject

@property (getter=isCalled) BOOL called; // ivar: _called
@property (copy, nonatomic) id *fallbackBlock; // ivar: _fallbackBlock
@property (nonatomic, getter=shouldBeFatal) BOOL fatal; // ivar: _fatal
@property (copy, nonatomic) NSString *message; // ivar: _message


-(void)dealloc;
-(void)markCalled;


@end


#endif