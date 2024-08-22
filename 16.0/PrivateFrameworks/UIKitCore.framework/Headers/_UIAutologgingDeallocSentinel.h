// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIAUTOLOGGINGDEALLOCSENTINEL_H
#define _UIAUTOLOGGINGDEALLOCSENTINEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UIAutologgingDeallocSentinel : NSObject

@property (nonatomic) BOOL called; // ivar: _called
@property (copy, nonatomic) NSString *message; // ivar: _message


-(void)dealloc;


@end


#endif