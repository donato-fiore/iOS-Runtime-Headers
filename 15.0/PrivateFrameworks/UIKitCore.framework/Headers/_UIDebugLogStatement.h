// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDEBUGLOGSTATEMENT_H
#define _UIDEBUGLOGSTATEMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UIDebugLogStatement : NSObject

@property (nonatomic) NSUInteger indentLevel; // ivar: _indentLevel
@property (copy, nonatomic) NSString *prefix; // ivar: _prefix
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger type; // ivar: _type


-(id)init;


@end


#endif