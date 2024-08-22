// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKDEVICE_H
#define MKDEVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MKDevice : NSObject

@property (copy, nonatomic) NSString *deviceFamily; // ivar: _deviceFamily
@property (nonatomic) NSInteger iconSize; // ivar: _iconSize
@property (copy, nonatomic) NSString *systemName; // ivar: _systemName
@property (copy, nonatomic) NSString *systemVersion; // ivar: _systemVersion


-(id)init;


@end


#endif