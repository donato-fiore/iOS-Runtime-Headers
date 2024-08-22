// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKAPPLICATIONMIGRATOR_H
#define MKAPPLICATIONMIGRATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MKApplicationMigrator : NSObject {
    *sqlite3 _database;
    NSUInteger _totalCount;
    NSUInteger _matchedAppsCount;
}


@property (retain, nonatomic) NSMutableArray *identifiers; // ivar: _identifiers


-(id)init;
-(void)close;
-(void)dealloc;
-(void)didLookup:(NSUInteger)arg0 apps:(id)arg1 error:(id)arg2 ;
-(void)drainQueue;
-(void)import:(id)arg0 ;
-(void)importDataEncodedInJSON:(id)arg0 ;
-(void)insertApps:(NSUInteger)arg0 apps:(id)arg1 ;
-(void)insertData:(id)arg0 ;
-(void)lookup:(id)arg0 ;
-(void)open;
-(void)slice:(NSUInteger)arg0 ;


@end


#endif