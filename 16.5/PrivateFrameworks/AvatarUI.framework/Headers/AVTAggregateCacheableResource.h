// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAGGREGATECACHEABLERESOURCE_H
#define AVTAGGREGATECACHEABLERESOURCE_H

@class NSArray, NSString;
@protocol AVTCacheableResource;

#import <Foundation/Foundation.h>


@interface AVTAggregateCacheableResource : NSObject <AVTCacheableResource>



@property (readonly, nonatomic) NSArray *cacheableResources; // ivar: _cacheableResources
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)requiresEncryption;
-(NSUInteger)costForScope:(id)arg0 ;
-(id)identifierForScope:(id)arg0 persistent:(BOOL)arg1 ;
-(id)initWithCacheableResources:(id)arg0 ;
-(id)persistentIdentifierForScope:(id)arg0 ;
-(id)volatileIdentifierForScope:(id)arg0 ;


@end


#endif