// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDPINTERACTIONSTOREDATAHARVESTER_H
#define _CDPINTERACTIONSTOREDATAHARVESTER_H

@class NSMutableDictionary, NSString, NSArray, NSPredicate;
@protocol _CDPDataHarvester;

#import <Foundation/Foundation.h>

#import "_CDInteractionStore.h"

@interface _CDPInteractionStoreDataHarvester : NSObject <_CDPDataHarvester>

 {
    NSMutableDictionary *_identifierToContactMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *interactions; // ivar: _interactions
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (retain, nonatomic) _CDInteractionStore *store; // ivar: _store
@property (readonly) Class superclass;


-(id)contactForIdentifier:(id)arg0 ;
// -(void)loadWithLimit:(NSUInteger)arg0 dataPointReader:(id)arg1 completion:(unk)arg2  ;


@end


#endif