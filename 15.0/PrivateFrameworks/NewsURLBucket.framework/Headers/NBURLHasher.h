// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NBURLHASHER_H
#define NBURLHASHER_H


#import <Foundation/Foundation.h>

#import "NBObjCURLHasher.h"

@interface NBURLHasher : NSObject

@property (readonly, nonatomic) NBObjCURLHasher *hasher; // ivar: _hasher


-(id)hashForURL:(id)arg0 maxLength:(NSUInteger)arg1 ;
-(id)init;


@end


#endif