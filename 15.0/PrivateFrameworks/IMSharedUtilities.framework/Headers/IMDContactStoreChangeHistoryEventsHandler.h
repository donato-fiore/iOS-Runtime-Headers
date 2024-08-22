// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDCONTACTSTORECHANGEHISTORYEVENTSHANDLER_H
#define IMDCONTACTSTORECHANGEHISTORYEVENTSHANDLER_H

@class NSMutableDictionary, NSString;
@protocol CNChangeHistoryEventVisitor;

#import <Foundation/Foundation.h>


@interface IMDContactStoreChangeHistoryEventsHandler : NSObject <CNChangeHistoryEventVisitor>



@property (retain, nonatomic) NSMutableDictionary *CNIDToAliasesMap; // ivar: _CNIDToAliasesMap
@property (retain, nonatomic) NSMutableDictionary *aliasToCNIDMap; // ivar: _aliasToCNIDMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generateCNIDToAliasesMapFrom:(id)arg0 ;
-(id)getAliasToCNIDMap;
-(id)initWithAliasToCNIDMap:(id)arg0 ;
-(id)matchAliasesFromCacheForCNContact:(id)arg0 ;
-(void)addAliasToCNIDToAliasMap:(id)arg0 withCNID:(id)arg1 ;
-(void)handleAddOrUpdateEventForCNContact:(id)arg0 ;
-(void)removeAliasFromCNIDToAliasesMap:(id)arg0 withCNID:(id)arg1 ;
-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;


@end


#endif