// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKAPPLICATIONMIGRATOR_H
#define MKAPPLICATIONMIGRATOR_H

@class NSMutableArray, NSDictionary;


#import "MKMigrator.h"
#import "MKApplicationDatabase.h"

@interface MKApplicationMigrator : MKMigrator {
    BOOL _isImporting;
    NSUInteger _lookupErrorCount;
    MKApplicationDatabase *_db;
    NSUInteger _totalCount;
    NSUInteger _matchedAppsCount;
}


@property (retain, nonatomic) NSMutableArray *identifiers; // ivar: _identifiers
@property (retain, nonatomic) NSDictionary *signatures; // ivar: _signatures


-(BOOL)prompt;
-(id)init;
-(id)lookup;
-(void)cancel;
-(void)close;
-(void)dealloc;
-(void)didLookup:(id)arg0 identifiers:(id)arg1 error:(id)arg2 ;
-(void)drainQueue;
-(void)import;
-(void)import:(id)arg0 ;
-(void)import:(id)arg0 identifiers:(id)arg1 ;
-(void)importDataEncodedInJSON:(id)arg0 ;
-(void)install;
-(void)install:(id)arg0 ;
-(void)lookup:(id)arg0 ;
-(void)purchase;
-(void)slice:(NSUInteger)arg0 ;


@end


#endif