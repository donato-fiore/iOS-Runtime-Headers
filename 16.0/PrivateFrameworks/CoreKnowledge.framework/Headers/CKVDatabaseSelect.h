// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVDATABASESELECT_H
#define CKVDATABASESELECT_H



#import "CKVDatabaseCommand.h"

@interface CKVDatabaseSelect : CKVDatabaseCommand



+(id)builderWithTableName:(id)arg0 ;
-(void)addLimit:(NSUInteger)arg0 offset:(NSUInteger)arg1 ;
-(void)replaceOffset:(NSUInteger)arg0 ;


@end


#endif