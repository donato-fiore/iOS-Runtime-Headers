// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUPURCHASEBATCH_H
#define SUPURCHASEBATCH_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SUPurchaseManager.h"

@interface SUPurchaseBatch : NSObject {
    BOOL _shouldSuspendWhenFinished;
}


@property (retain, nonatomic) NSArray *continuations; // ivar: _continuations
@property (retain, nonatomic) NSArray *errors; // ivar: _errors
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSArray *offers; // ivar: _offers
@property (weak, nonatomic) SUPurchaseManager *purchaseManager; // ivar: _purchaseManager
@property (retain, nonatomic) NSArray *validPurchases; // ivar: _validPurchases


-(*unk)errorEqualCallback;
-(id)_copyModifiedErrorsFromDictionary:(struct __CFDictionary *)arg0 ;
-(id)_copyUniqueErrorsFromErrors:(id)arg0 ;
-(id)_copyValidPurchasesForItems:(id)arg0 ;
-(id)copyContinuationsForPurchases:(id)arg0 ;
-(id)copyFilteredItemsFromItems:(id)arg0 ;
-(id)everythingFailedErrorForError:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(id)initWithItems:(id)arg0 offers:(id)arg1 ;
-(id)mergedErrorForError:(id)arg0 withCount:(NSInteger)arg1 ;
-(void)_validateItems;
-(void)dealloc;
-(void)setDocumentTargetIdentifier:(id)arg0 ;
-(void)setPurchasesAndContinuationsFromPurchases:(id)arg0 ;


@end


#endif