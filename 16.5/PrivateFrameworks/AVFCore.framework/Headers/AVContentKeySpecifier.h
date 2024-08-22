// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCONTENTKEYSPECIFIER_H
#define AVCONTENTKEYSPECIFIER_H

@class NSData, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface AVContentKeySpecifier : NSObject {
    NSData *_initializationData;
}


@property (readonly) id *identifier; // ivar: _identifier
@property (readonly) NSData *initializationData;
@property (readonly) NSString *keySystem; // ivar: _keySystem
@property (readonly) NSDictionary *options; // ivar: _options


+(id)contentKeySpecifierForKeySystem:(id)arg0 identifier:(id)arg1 options:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForKeySystem:(id)arg0 identifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3 ;
-(id)initForKeySystem:(id)arg0 identifier:(id)arg1 options:(id)arg2 ;
-(id)initForKeySystem:(id)arg0 initializationData:(id)arg1 ;
-(void)dealloc;


@end


#endif