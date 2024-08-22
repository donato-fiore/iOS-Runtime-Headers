// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WGCONCRETEDATASOURCE_H
#define _WGCONCRETEDATASOURCE_H

@class NSMutableArray, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface _WGConcreteDataSource : NSObject {
    NSMutableArray *_observers;
    NSMutableDictionary *_identifiersToData;
}


@property (readonly, nonatomic) NSArray *data;
@property (readonly, nonatomic) NSArray *dataIdentifiers;


-(id)datumWithIdentifier:(id)arg0 ;
-(id)init;
-(void)addObserver:(id)arg0 completion:(id)arg1 ;
-(void)dataSource:(id)arg0 removeDatumWithIdentifier:(id)arg1 observerUpdateBlock:(id)arg2 ;
-(void)dataSource:(id)arg0 replaceWithDatum:(id)arg1 observerUpdateBlock:(id)arg2 ;
-(void)removeObserver:(id)arg0 completion:(id)arg1 ;


@end


#endif