// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUUPNEXTDATASOURCE_H
#define MRUUPNEXTDATASOURCE_H

@class MPCPlayerResponse, NSArray, NSDictionary;
@protocol MRUUpNextDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface MRUUpNextDataSource : NSObject

@property (weak, nonatomic) NSObject<MRUUpNextDataSourceDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) MPCPlayerResponse *response; // ivar: _response
@property (readonly, nonatomic) NSArray *responseItemIDs; // ivar: _responseItemIDs
@property (retain, nonatomic) NSDictionary *responseItemsByIdentifier; // ivar: _responseItemsByIdentifier


-(BOOL)canMoveResponseItemWithIdentifier:(id)arg0 ;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)responseItemForIdentifier:(id)arg0 ;
-(void)moveReponseItemToNextWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)moveReponseItemWithIdentifier:(id)arg0 afterResponseItemWithIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)playItemWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeResponseItemWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateContentItems;


@end


#endif