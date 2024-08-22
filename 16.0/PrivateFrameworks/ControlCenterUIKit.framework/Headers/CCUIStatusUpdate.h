// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUISTATUSUPDATE_H
#define CCUISTATUSUPDATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CCUIStatusUpdate : NSObject

@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)statusUpdateWithMessage:(id)arg0 type:(NSUInteger)arg1 ;
-(id)_initWithMessage:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif