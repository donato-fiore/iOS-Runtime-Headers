// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TFCALLBACKSTORE_H
#define TFCALLBACKSTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TFCallbackStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *store; // ivar: _store


-(id)init;
-(id)lookupForKey:(id)arg0 ;
-(void)storeCallbackDefinition:(id)arg0 forKey:(id)arg1 scope:(id)arg2 ;


@end


#endif