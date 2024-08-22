// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCNRECIPIENTSEARCHDATASOURCE_H
#define PXCNRECIPIENTSEARCHDATASOURCE_H

@class NSArray;


#import "PXRecipientSearchDataSource.h"

@interface PXCNRecipientSearchDataSource : PXRecipientSearchDataSource {
    NSArray *_searchResults;
}




-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)initWithSearchResults:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;


@end


#endif