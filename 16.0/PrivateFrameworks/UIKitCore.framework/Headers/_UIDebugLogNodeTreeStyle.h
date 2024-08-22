// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDEBUGLOGNODETREESTYLE_H
#define _UIDEBUGLOGNODETREESTYLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UIDebugLogNodeTreeStyle : NSObject

@property (readonly, nonatomic) NSString *intermediate; // ivar: _intermediate
@property (readonly, nonatomic) NSString *lastNode; // ivar: _lastNode
@property (readonly, nonatomic) NSString *node; // ivar: _node
@property (readonly, nonatomic) NSString *trailing; // ivar: _trailing


+(id)defaultStyle;
+(id)styleWithNode:(id)arg0 lastNode:(id)arg1 intermediate:(id)arg2 trailing:(id)arg3 ;
-(id)initWithNode:(id)arg0 lastNode:(id)arg1 intermediate:(id)arg2 trailing:(id)arg3 ;


@end


#endif