// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNCACHEFIXEDTTLBOUNDINGSTRATEGY_H
#define _CNCACHEFIXEDTTLBOUNDINGSTRATEGY_H

@class NSString, NSMutableDictionary;
@protocol CNCacheBoundingStrategy, CNTimeProvider;

#import <Foundation/Foundation.h>


@interface _CNCacheFixedTTLBoundingStrategy : NSObject <CNCacheBoundingStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger renewalOptions; // ivar: _renewalOptions
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CNTimeProvider> *timeProvider; // ivar: _timeProvider
@property (readonly, nonatomic) NSMutableDictionary *timestamps; // ivar: _timestamps
@property (readonly, nonatomic) CGFloat ttl; // ivar: _ttl


-(BOOL)shouldEvictKey:(id)arg0 ;
-(id)init;
-(id)initWithTTL:(CGFloat)arg0 ;
-(id)initWithTTL:(CGFloat)arg0 renewalOptions:(NSUInteger)arg1 timeProvider:(id)arg2 ;
-(void)updateTimestampForKey:(id)arg0 ;
-(void)willAccessKey:(id)arg0 ;
-(void)willUpdateCacheBy:(NSUInteger)arg0 forKey:(id)arg1 keysToEvict:(*id)arg2 ;


@end


#endif