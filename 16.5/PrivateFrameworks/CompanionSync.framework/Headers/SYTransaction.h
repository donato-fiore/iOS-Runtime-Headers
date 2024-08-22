// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYTRANSACTION_H
#define SYTRANSACTION_H

@class NSMutableArray, NSDictionary, NSString;
@protocol SYChangeTracking, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "SYLegacyStore.h"

@interface SYTransaction : NSObject <SYChangeTracking>

 {
    uint8_t _inTransaction;
    NSObject<OS_os_transaction> *_transaction;
}


@property (retain, nonatomic) NSMutableArray *changes; // ivar: _changes
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (copy, nonatomic) NSDictionary *contextInfo; // ivar: _contextInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *idsOptions; // ivar: _idsOptions
@property (retain, nonatomic) SYLegacyStore *store; // ivar: _store
@property (readonly) Class superclass;


-(BOOL)_beginTransaction;
-(BOOL)_endTransaction;
-(id)changeList;
-(id)initWithStore:(id)arg0 ;
-(void)_transactionDidComplete:(BOOL)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addObject:(id)arg0 completion:(id)arg1 ;
-(void)addObject:(id)arg0 context:(id)arg1 ;
-(void)addObject:(id)arg0 context:(id)arg1 idsOptions:(id)arg2 ;
-(void)commit;
-(void)commitBlocking:(BOOL)arg0 reportError:(id)arg1 ;
-(void)dealloc;
-(void)deleteObject:(id)arg0 ;
-(void)deleteObject:(id)arg0 completion:(id)arg1 ;
-(void)deleteObject:(id)arg0 context:(id)arg1 ;
-(void)deleteObject:(id)arg0 context:(id)arg1 idsOptions:(id)arg2 ;
-(void)rollback;
-(void)updateObject:(id)arg0 ;
-(void)updateObject:(id)arg0 completion:(id)arg1 ;
-(void)updateObject:(id)arg0 context:(id)arg1 ;
-(void)updateObject:(id)arg0 context:(id)arg1 idsOptions:(id)arg2 ;


@end


#endif