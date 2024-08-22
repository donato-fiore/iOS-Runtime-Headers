// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMSQLITEDB_H
#define MCMSQLITEDB_H

@class NSURL;
@protocol MCMSQLiteDBCodeSigningPeerageDelegate;

#import <Foundation/Foundation.h>


@interface MCMSQLiteDB : NSObject

@property (nonatomic) *sqlite3 db; // ivar: _db
@property (weak, nonatomic) NSObject<MCMSQLiteDBCodeSigningPeerageDelegate> *peerageDelegate; // ivar: _peerageDelegate
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)moveDBWithURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(struct sqlite3 *)openDBWithURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_deleteCodeSigningWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)_insertChildIdentifier:(id)arg0 forParentIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)_insertCodeSigningData:(id)arg0 forIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)_insertCodeSigningInfo:(id)arg0 forIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)_performInsertOrUpdateQuery:(char *)arg0 withCodeSigningEntry:(id)arg1 forIdentifier:(id)arg2 isUpdate:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)_performSingleParameterQuery:(char *)arg0 withTextInput:(id)arg1 error:(*id)arg2 ;
-(BOOL)_performSingleParameterQuery:(char *)arg0 withTextInput:(id)arg1 expectedChanges:(int)arg2 error:(*id)arg3 ;
-(BOOL)_performTwoParameterQuery:(char *)arg0 withTextInputOne:(id)arg1 andTextInputTwo:(id)arg2 expectedChanges:(int)arg3 error:(*id)arg4 ;
-(BOOL)_sqliteExec:(id)arg0 error:(*id)arg1 ;
-(BOOL)addCodeSigningEntry:(id)arg0 withIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteAllAdvanceCopiesOfCodeSigningEntriesWithError:(*id)arg0 ;
-(BOOL)deleteCodeSigningEntryWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)invalidateCodeSigningForIdentifierAndAllChildren:(id)arg0 error:(*id)arg1 ;
-(BOOL)invalidateCodeSigningWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)_codeSigningEntryFromStatementRow:(struct sqlite3_stmt *)arg0 error:(*id)arg1 ;
-(id)_selectCodeSigningEntryWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)childIdentifiersForParentIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)childParentMapWithError:(*id)arg0 ;
-(id)codeSigningEntryWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)enumerateIdentifiersAndCodeSigningInfoUsingBlock:(id)arg0 ;
-(id)identifiersWithError:(*id)arg0 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)parentIdentifierForChildIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)closeDB;
-(void)dealloc;


@end


#endif