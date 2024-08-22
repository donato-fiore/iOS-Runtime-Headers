// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPBITVALUEDATARECORDMOCONVERTER_H
#define _DPBITVALUEDATARECORDMOCONVERTER_H

@protocol _DPRecordConverter;

#import <Foundation/Foundation.h>


@interface _DPBitValueDataRecordMOConverter : NSObject <_DPRecordConverter>





-(BOOL)copyRecord:(id)arg0 intoManagedObject:(id)arg1 ;
-(id)createRecordFromManagedObject:(id)arg0 ;
-(id)insertRecord:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)insertRecords:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)updateRecords:(id)arg0 inManagedObjectContext:(id)arg1 ;


@end


#endif