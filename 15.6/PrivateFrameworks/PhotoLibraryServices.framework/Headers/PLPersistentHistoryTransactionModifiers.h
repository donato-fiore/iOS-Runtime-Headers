// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPERSISTENTHISTORYTRANSACTIONMODIFIERS_H
#define PLPERSISTENTHISTORYTRANSACTIONMODIFIERS_H


#import <Foundation/Foundation.h>


@interface PLPersistentHistoryTransactionModifiers : NSObject

@property (nonatomic) int changeSource; // ivar: _changeSource
@property (readonly, nonatomic) BOOL isSyncable;
@property (nonatomic) BOOL syncChangeMarker; // ivar: _syncChangeMarker


+(id)transactionAuthorFromChangeSource:(int)arg0 ;
+(id)transactionAuthorFromChangeSource:(int)arg0 syncChangeMarker:(BOOL)arg1 ;
+(id)transactionModifiersFromTransactionAuthor:(id)arg0 ;
-(BOOL)updateFromTransactionAuthor:(id)arg0 ;
-(id)_descriptionWithBuilder:(id)arg0 ;
-(id)_pl_prettyDescriptionWithIndent:(NSInteger)arg0 ;
-(id)description;
-(id)encodeAsTransactionAuthor;
-(id)init;
-(id)initWithChangeSource:(int)arg0 syncChangeMarker:(BOOL)arg1 ;


@end


#endif