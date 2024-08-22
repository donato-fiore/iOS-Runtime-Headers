// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _OSLOGCATALOGFILTER_H
#define _OSLOGCATALOGFILTER_H

@class NSMutableSet;
@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>


@interface _OSLogCatalogFilter : NSObject <NSPredicateVisitor>

 {
    NSMutableSet *_pidAccept;
    NSMutableSet *_processLookupSubstr;
    NSMutableSet *_senderLookupSubstr;
    NSMutableSet *_subsysSubstrAccept;
    NSMutableSet *_uuidAccept;
    char * _uuidtext_path;
    BOOL _hasItems;
    BOOL _hasSharedCacheItems;
}




-(BOOL)containsProcessID:(id)arg0 ;
-(BOOL)containsProcessLookupSubstr:(id)arg0 ;
-(BOOL)containsSenderLookupSubstr:(id)arg0 ;
-(BOOL)containsSubsystemSubstr:(id)arg0 ;
-(BOOL)containsUUID:(id)arg0 ;
-(BOOL)isKeptCatalog:(struct catalog_s *)arg0 ;
-(id)initWithPredicate:(id)arg0 collection:(id)arg1 ;
-(struct uuiddb_dsc_map_s *)getDSCMap;
-(void)addProcessID:(id)arg0 ;
-(void)addProcessLookupSubstr:(id)arg0 ;
-(void)addSenderLookupSubstr:(id)arg0 ;
-(void)addSubsystem:(id)arg0 ;
-(void)addUUID:(id)arg0 ;
-(void)dealloc;
-(void)generateUUIDSet;
-(void)handleDSCContents:(struct uuiddb_dsc_map_s *)arg0 ;
-(void)handleDSOFile:(struct _ftsent *)arg0 ;
-(void)processComparisonPredicate:(id)arg0 ;
-(void)processLeftExpression:(id)arg0 andRightExpression:(id)arg1 ;
-(void)readDSCUUIDs;
-(void)readDSOUUIDs;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif