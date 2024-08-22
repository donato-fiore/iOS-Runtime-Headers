// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICNOTEDATA_H
#define ICNOTEDATA_H

@class NSManagedObject, NSData;


#import "ICNote.h"

@interface ICNoteData : NSManagedObject

@property (retain, nonatomic) NSData *cryptoInitializationVector;
@property (retain, nonatomic) NSData *cryptoTag;
@property (retain, nonatomic) NSData *data;
@property BOOL needsToBeSaved; // ivar: needsToBeSaved
@property (retain, nonatomic) ICNote *note;
@property (readonly, nonatomic) NSData *primitiveData;
@property (nonatomic, getter=isSettingNoteData) BOOL settingNoteData; // ivar: settingNoteData


-(void)saveNoteDataIfNeeded;
-(void)willAccessValueForKey:(id)arg0 ;
-(void)willSave;


@end


#endif