// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TNARCHIVEDSHEETSELECTION_H
#define TNARCHIVEDSHEETSELECTION_H

@class TSPObject, NSString;
@protocol TSKArchivedSelection;


#import "TNSheetSelection.h"

@interface TNArchivedSheetSelection : TSPObject <TSKArchivedSelection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TNSheetSelection *selection; // ivar: mSelection
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 ;
-(void)dealloc;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif