// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIAAPIPARSERLAYER_H
#define MPMEDIAAPIPARSERLAYER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPMediaAPIParserLayer : NSObject

@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)layerWithFirstObjectOfType:(NSUInteger)arg0 ;
+(id)layerWithKey:(id)arg0 ofType:(NSUInteger)arg1 ;


@end


#endif