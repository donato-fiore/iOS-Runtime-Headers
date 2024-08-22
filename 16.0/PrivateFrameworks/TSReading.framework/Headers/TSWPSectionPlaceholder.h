// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPSECTIONPLACEHOLDER_H
#define TSWPSECTIONPLACEHOLDER_H

@class TPDocumentRoot;
@protocol TSKDocumentObject, TSWPSection;


#import "TSPObject.h"
#import "TSWPStorage.h"

@interface TSWPSectionPlaceholder : TSPObject <TSKDocumentObject, TSWPSection>

 {
    TPDocumentRoot *_documentRoot;
    TSWPStorage *_parentStorage;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)description;
-(id)initWithContext:(id)arg0 ;
-(id)parentStorage;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg0 ;
-(void)setParentStorage:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif