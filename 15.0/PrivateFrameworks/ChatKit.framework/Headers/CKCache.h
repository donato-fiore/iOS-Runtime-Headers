// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCACHE_H
#define CKCACHE_H

@class NSString, NSMutableDictionary;
@protocol CKCache;

#import <Foundation/Foundation.h>


@interface CKCache : NSObject <CKCache>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *dictionary; // ivar: _dictionary
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif