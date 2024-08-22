// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPMODELINFORECORDMOCONVERTER_H
#define _DPMODELINFORECORDMOCONVERTER_H

@protocol _DPRecordConverter;

#import <Foundation/Foundation.h>


@interface _DPModelInfoRecordMOConverter : NSObject <_DPRecordConverter>





-(BOOL)copyRecord:(id)arg0 intoManagedObject:(id)arg1 ;
-(id)createRecordFromManagedObject:(id)arg0 ;
-(id)insertRecord:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)insertRecords:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)updateRecords:(id)arg0 inManagedObjectContext:(id)arg1 ;


@end


#endif