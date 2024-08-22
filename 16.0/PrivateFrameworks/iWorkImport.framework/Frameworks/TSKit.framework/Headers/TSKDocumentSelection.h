// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKDOCUMENTSELECTION_H
#define TSKDOCUMENTSELECTION_H



#import "TSKSelection.h"
#import "TSKDocumentRoot.h"

@interface TSKDocumentSelection : TSKSelection

@property (readonly, weak, nonatomic) TSKDocumentRoot *documentRoot; // ivar: mDocumentRoot


+(Class)archivedSelectionClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithDocumentRoot:(id)arg0 ;


@end


#endif