// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTARCHIVEDAUTOFILLSELECTION_H
#define TSTARCHIVEDAUTOFILLSELECTION_H

@class TSPObject, NSString, TSKSelection;
@protocol TSKArchivedSelection;


#import "TSTAutofillSelection.h"

@interface TSTArchivedAutofillSelection : TSPObject <TSKArchivedSelection>



@property (retain, nonatomic) TSTAutofillSelection *autofillSelection; // ivar: _autofillSelection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSKSelection *selection;
@property (readonly) Class superclass;


-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif