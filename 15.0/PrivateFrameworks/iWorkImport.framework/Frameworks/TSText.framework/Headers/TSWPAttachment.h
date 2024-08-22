// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPATTACHMENT_H
#define TSWPATTACHMENT_H

@class TSPObject, NSString;
@protocol TSWPStorageActionObjectProtocol, TSKDocumentObject, TSDOwningAttachment, TSPCopying, TSKModel;


#import "TSWPStorage.h"

@interface TSWPAttachment : TSPObject <TSWPStorageActionObjectProtocol, TSKDocumentObject, TSDOwningAttachment, TSPCopying, TSKModel>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAnchored;
@property (readonly, nonatomic) BOOL isAttachedToBodyText;
@property (readonly, nonatomic) BOOL isDrawable;
@property (readonly, nonatomic) BOOL isHorizontallyCentered;
@property (readonly, nonatomic) BOOL isPartitioned;
@property (readonly, nonatomic) BOOL isSearchable;
@property (readonly, nonatomic) BOOL isVerticallyCentered;
@property (weak, nonatomic) TSWPStorage *parentStorage; // ivar: _parentStorage
@property (readonly, nonatomic) BOOL specifiesEnabledKnobMask;
@property (readonly) Class superclass;


+(NSUInteger)attributeArrayKind;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)mostSpecificAttachmentFromInfo:(id)arg0 ;
-(BOOL)changesWithPageCount;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)preserveAttributesOverSelectionWhenInserting;
-(BOOL)shouldInvalidateWhenTextPropertiesChange;
-(BOOL)supportsUUID;
-(NSUInteger)findCharIndex;
-(NSUInteger)findCharIndexWithHintIndex:(*NSUInteger)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)objectsForStyleMigrating;
-(id)topLevelAttachment;
-(unsigned int)elementKind;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)infoChanged;
-(void)migrateStyleWithDocumentRoot:(id)arg0 ;
-(void)performTemplateLocalization:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif