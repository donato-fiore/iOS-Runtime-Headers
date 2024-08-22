// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTATUSDOMAINDATACHANGERECORD_H
#define STSTATUSDOMAINDATACHANGERECORD_H

@class BSMutableIntegerMap, BSIntegerSet;

#import <Foundation/Foundation.h>


@interface STStatusDomainDataChangeRecord : NSObject {
    BSMutableIntegerMap *_fallbackDataByClientKeyByDomain;
    BSMutableIntegerMap *_entriesByDomain;
    BSMutableIntegerMap *_cachedCurrentDataByDomain;
}


@property (readonly, nonatomic) BSIntegerSet *domainsWithData;


-(id)currentDataForDomain:(NSUInteger)arg0 ;
-(id)fallbackDataForClientKey:(id)arg0 domain:(NSUInteger)arg1 ;
-(id)init;
-(void)addDiff:(id)arg0 forClientKey:(id)arg1 domain:(NSUInteger)arg2 ;
-(void)removeAllEntriesForClientKey:(id)arg0 domain:(NSUInteger)arg1 ;
-(void)setData:(id)arg0 forClientKey:(id)arg1 domain:(NSUInteger)arg2 ;
-(void)setFallbackData:(id)arg0 forClientKey:(id)arg1 domain:(NSUInteger)arg2 ;


@end


#endif