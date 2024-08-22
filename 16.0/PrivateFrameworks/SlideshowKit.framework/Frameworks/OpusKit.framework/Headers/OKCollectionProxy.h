// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKCOLLECTIONPROXY_H
#define OKCOLLECTIONPROXY_H

@class NSDictionary;
@protocol OKCollectionProxyDataSource;



@interface OKCollectionProxy : NSDictionary

@property (nonatomic) NSObject<OKCollectionProxyDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) NSUInteger tag; // ivar: _tag


-(NSUInteger)count;
-(id)init;
-(id)initWithObjects:(id)arg0 forKeys:(id)arg1 ;
-(id)keyEnumerator;
-(id)objectAtIndexPath:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;


@end


#endif