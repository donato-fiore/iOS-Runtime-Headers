// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSREALTIMESIGNPOSTER_H
#define BCSREALTIMESIGNPOSTER_H


#import <Foundation/Foundation.h>


@interface BCSRealTimeSignposter : NSObject

@property (readonly, nonatomic) NSUInteger signpostIdentifier; // ivar: _signpostIdentifier
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)_initWithType:(NSInteger)arg0 signpostIdentifier:(NSUInteger)arg1 ;


@end


#endif