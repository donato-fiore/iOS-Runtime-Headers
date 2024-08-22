// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCONTENTKEYSPECIFIER_H
#define AVCONTENTKEYSPECIFIER_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface AVContentKeySpecifier : NSObject

@property (readonly) id *identifier; // ivar: identifier
@property (readonly) NSString *keySystem; // ivar: keySystem
@property (readonly) NSDictionary *options; // ivar: options


+(id)contentKeySpecifierForKeySystem:(id)arg0 identifier:(id)arg1 options:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForKeySystem:(id)arg0 identifier:(id)arg1 options:(id)arg2 ;
-(void)dealloc;


@end


#endif