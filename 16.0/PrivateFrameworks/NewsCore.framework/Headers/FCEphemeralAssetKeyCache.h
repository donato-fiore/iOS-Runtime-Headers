// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCEPHEMERALASSETKEYCACHE_H
#define FCEPHEMERALASSETKEYCACHE_H

@class NSString;
@protocol FCAssetKeyCacheType;

#import <Foundation/Foundation.h>

#import "FCThreadSafeMutableDictionary.h"

@interface FCEphemeralAssetKeyCache : NSObject <FCAssetKeyCacheType>

 {
    FCThreadSafeMutableDictionary *_dictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)interestTokenForWrappingKeyIDs:(id)arg0 ;
-(id)wrappingKeyForWrappingKeyID:(id)arg0 ;
-(void)removeAllWrappingKeys;
-(void)setWrappingKey:(id)arg0 forWrappingKeyID:(id)arg1 ;


@end


#endif