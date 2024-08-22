// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDARCHIVEDINFOHYPERLINKSELECTION_H
#define TSDARCHIVEDINFOHYPERLINKSELECTION_H

@class TSPObject, NSString, TSKSelection;
@protocol TSKArchivedSelection;


#import "TSDInfoHyperlinkSelection.h"

@interface TSDArchivedInfoHyperlinkSelection : TSPObject <TSKArchivedSelection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSDInfoHyperlinkSelection *hyperlinkSelection; // ivar: _hyperlinkSelection
@property (retain, nonatomic) TSKSelection *selection;
@property (readonly) Class superclass;


-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif