// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSTEXTCONTENTMANAGER_H
#define NSTEXTCONTENTMANAGER_H

@class NSMutableArray, NSString, NSArray;
@protocol NSTextElementProvider, NSSecureCoding, NSTextContentManagerDelegate;

#import <Foundation/Foundation.h>

#import "NSTextLayoutManager.h"
#import "NSTextRange.h"

@interface NSTextContentManager : NSObject <NSTextElementProvider, NSSecureCoding>

 {
    NSTextLayoutManager *_primaryTextLayoutManager;
    uint8_t _transactionStack;
    NSMutableArray *_editHistory;
    NSMutableArray *_textLayoutManagers;
}


@property BOOL automaticallySynchronizesTextLayoutManagers; // ivar: _automaticallySynchronizesTextLayoutManagers
@property BOOL automaticallySynchronizesToBackingStore; // ivar: _automaticallySynchronizesToBackingStore
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<NSTextContentManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSTextRange *documentRange;
@property (readonly) BOOL hasEditingTransaction;
@property (readonly) NSUInteger hash;
@property NSUInteger maximumNumberOfUncachedElements; // ivar: _maximumNumberOfUncachedElements
@property (retain) NSTextLayoutManager *primaryTextLayoutManager;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *textLayoutManagers;


+(BOOL)supportsSecureCoding;
-(BOOL)isCountableDataSource;
-(NSInteger)offsetFromLocation:(id)arg0 toLocation:(id)arg1 ;
-(id)enumerateTextElementsFromLocation:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)locationFromLocation:(id)arg0 withOffset:(NSInteger)arg1 ;
-(id)textElementsForRange:(id)arg0 ;
-(void)_decrementTransactionStack;
-(void)_incrementTransactionStack;
-(void)addTextLayoutManager:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performEditingTransactionUsingBlock:(id)arg0 ;
-(void)performEditingTransactionWithBlock:(id)arg0 ;
-(void)recordEditActionInRange:(id)arg0 newTextRange:(id)arg1 ;
-(void)removeTextLayoutManager:(id)arg0 ;
-(void)replaceContentsInRange:(id)arg0 withTextElements:(id)arg1 ;
-(void)synchronizeTextLayoutManagers:(id)arg0 ;
-(void)synchronizeToBackingStore:(id)arg0 ;


@end


#endif