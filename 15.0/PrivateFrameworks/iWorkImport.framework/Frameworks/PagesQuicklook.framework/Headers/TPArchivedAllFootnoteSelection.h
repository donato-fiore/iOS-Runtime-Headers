// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPARCHIVEDALLFOOTNOTESELECTION_H
#define TPARCHIVEDALLFOOTNOTESELECTION_H

@class TSPObject, NSString;
@protocol TSKArchivedSelection;


#import "TPAllFootnoteSelection.h"

@interface TPArchivedAllFootnoteSelection : TSPObject <TSKArchivedSelection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TPAllFootnoteSelection *selection; // ivar: _selection
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif