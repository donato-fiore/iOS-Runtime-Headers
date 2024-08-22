// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCKMOCKDATABASE_H
#define IMDCKMOCKDATABASE_H

@class CKDatabase, NSDictionary;



@interface IMDCKMockDatabase : CKDatabase

@property (readonly, nonatomic) NSDictionary *identifierToZoneMap; // ivar: _identifierToZoneMap


-(id)_initWithContainer:(id)arg0 scope:(NSInteger)arg1 ;
-(id)_zoneIdentifierForOperation:(id)arg0 ;
-(id)_zoneManager;
-(id)init;
-(void)addOperation:(id)arg0 ;
-(void)dealloc;


@end


#endif