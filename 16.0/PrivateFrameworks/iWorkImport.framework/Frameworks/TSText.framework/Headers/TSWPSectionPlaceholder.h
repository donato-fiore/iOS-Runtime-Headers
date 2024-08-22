// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPSECTIONPLACEHOLDER_H
#define TSWPSECTIONPLACEHOLDER_H

@class TSPObject, NSString;
@protocol TSKDocumentObject, TSWPSection, TSKModel;


#import "TSWPStorage.h"

@interface TSWPSectionPlaceholder : TSPObject <TSKDocumentObject, TSWPSection, TSKModel>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) TSWPStorage *parentStorage; // ivar: _parentStorage
@property (readonly) Class superclass;


+(BOOL)needsObjectUUID;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)sectionTemplatePageOwningInfo:(id)arg0 ;
-(id)sectionTemplatePageOwningModel:(id)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif