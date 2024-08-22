// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNCLASSICTHEMERECORD_H
#define KNCLASSICTHEMERECORD_H

@class TSPObject, NSString, NSMutableArray, NSArray;


#import "KNClassicStylesheetRecord.h"

@interface KNClassicThemeRecord : TSPObject {
    NSString *_UUID;
    KNClassicStylesheetRecord *_stylesheetRecord;
    NSMutableArray *_masters;
}


@property (copy, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSArray *masters;
@property (retain, nonatomic) KNClassicStylesheetRecord *stylesheetRecord;


-(id)initWithContext:(id)arg0 ;
-(void)addMaster:(id)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif