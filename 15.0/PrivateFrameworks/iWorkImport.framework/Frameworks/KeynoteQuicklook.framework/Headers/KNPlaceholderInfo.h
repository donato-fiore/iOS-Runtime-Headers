// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNPLACEHOLDERINFO_H
#define KNPLACEHOLDERINFO_H

@class TSWPShapeInfo;



@interface KNPlaceholderInfo : TSWPShapeInfo



+(Class)classForUnarchiver:(id)arg0 ;
-(BOOL)autoListRecognition;
-(BOOL)autoListTermination;
-(BOOL)displaysInstructionalText;
-(BOOL)isAllowedInGroups;
-(BOOL)isEmpty;
-(BOOL)remainsInDocumentWhenDeletedFromChildInfos;
-(BOOL)shouldDisplayTextAsTypeName;
-(BOOL)shouldHideEmptyBullets;
-(Class)layoutClass;
-(Class)repClass;
-(id)copyAsShapeInfoWithContext:(id)arg0 ;
-(id)defaultInstructionalText;
-(int)kind;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif