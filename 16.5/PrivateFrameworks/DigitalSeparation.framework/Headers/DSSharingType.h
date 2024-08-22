// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSSHARINGTYPE_H
#define DSSHARINGTYPE_H

@class NSArray, NSString, NSMutableOrderedSet;
@protocol DSSource;

#import <Foundation/Foundation.h>


@interface DSSharingType : NSObject

@property (readonly, copy, nonatomic) NSArray *allPeople;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *localizedDetailText;
@property (retain, nonatomic) NSMutableOrderedSet *people; // ivar: _people
@property (readonly, nonatomic) NSInteger score;
@property (readonly, copy, nonatomic) NSArray *sortedPeople;
@property (retain, nonatomic) NSObject<DSSource> *source; // ivar: _source


+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithSource:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)addPerson:(id)arg0 ;
-(void)removePerson:(id)arg0 ;
-(void)stopAllSharingOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)stopSharingPeople:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;


@end


#endif