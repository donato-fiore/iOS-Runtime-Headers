// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSPACECHECKRESULTS_H
#define SUSPACECHECKRESULTS_H


#import <Foundation/Foundation.h>


@interface SUSpaceCheckResults : NSObject

@property (nonatomic) NSUInteger additionalBytesRequired; // ivar: _additionalBytesRequired
@property (nonatomic) BOOL hasSufficientFreeSpace; // ivar: _hasSufficientFreeSpace
@property (nonatomic) BOOL needsAppOffload; // ivar: _needsAppOffload
@property (nonatomic) BOOL needsCacheDelete; // ivar: _needsCacheDelete


-(id)init;


@end


#endif