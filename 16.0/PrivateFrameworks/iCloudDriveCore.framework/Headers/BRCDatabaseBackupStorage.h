// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCDATABASEBACKUPSTORAGE_H
#define BRCDATABASEBACKUPSTORAGE_H

@class NSURL, PQLConnection, NSArray;

#import <Foundation/Foundation.h>


@interface BRCDatabaseBackupStorage : NSObject

@property (retain, nonatomic) NSURL *attachedDatabaseURL; // ivar: _attachedDatabaseURL
@property (retain, nonatomic) PQLConnection *database; // ivar: _database
@property (retain, nonatomic) NSURL *databaseURL; // ivar: _databaseURL
@property (retain, nonatomic) NSArray *urlPropertiesToFetch; // ivar: _urlPropertiesToFetch


-(BOOL)addRecord:(id)arg0 ;
-(BOOL)attachDatabase:(id)arg0 error:(*id)arg1 ;
-(BOOL)clearStagedIDs:(id)arg0 ;
-(BOOL)fixUpBackupDetector:(id)arg0 ;
-(BOOL)fixUpClientState:(id)arg0 ;
-(BOOL)negateIDs:(id)arg0 ;
-(BOOL)setForeignKeys:(id)arg0 enabled:(BOOL)arg1 ;
-(BOOL)setUpDatabaseWithError:(*id)arg0 ;
-(BOOL)updateAttachedDatabase;
-(BOOL)updateIDs:(id)arg0 ;
-(id)backupManifestEnumerator:(id)arg0 ;
-(id)docIDForURL:(id)arg0 ;
-(id)initWithDatabaseURL:(id)arg0 ;
-(void)dealloc;
-(void)flushAndClose;
-(void)populateNewColumnsInDatabase:(id)arg0 forRecord:(id)arg1 basePath:(id)arg2 ;
-(void)populateNewColumnsWithBasePath:(id)arg0 ;


@end


#endif