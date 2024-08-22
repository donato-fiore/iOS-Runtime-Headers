// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TNSHEETSELECTION_H
#define TNSHEETSELECTION_H

@class TSKSelection;


#import "TNSheet.h"

@interface TNSheetSelection : TSKSelection

@property (readonly, nonatomic, getter=isPaginated) BOOL paginated; // ivar: mIsPaginated
@property (readonly, retain, nonatomic) TNSheet *sheet; // ivar: mSheet


+(Class)archivedSelectionClass;
+(id)selectionForSheet:(id)arg0 paginated:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)UUIDDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSheet:(id)arg0 paginated:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif