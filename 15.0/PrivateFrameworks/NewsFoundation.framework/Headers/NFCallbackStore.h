// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCALLBACKSTORE_H
#define NFCALLBACKSTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NFCallbackStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *store; // ivar: _store


-(id)init;
-(id)lookupForKey:(id)arg0 ;
-(void)storeCallbackDefinition:(id)arg0 forKey:(id)arg1 scope:(id)arg2 ;


@end


#endif