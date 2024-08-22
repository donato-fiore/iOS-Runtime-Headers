// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNACTIONGHOSTSELECTION_H
#define KNACTIONGHOSTSELECTION_H

@class TSKSelection;



@interface KNActionGhostSelection : TSKSelection



+(Class)archivedSelectionClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif