// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLINKENTITYCONTENTITEM_H
#define WFLINKENTITYCONTENTITEM_H

@class WFContentItem, LNDisplayRepresentation, LNEntity;



@interface WFLinkEntityContentItem : WFContentItem

@property (retain, nonatomic) LNDisplayRepresentation *displayRepresentation; // ivar: _displayRepresentation
@property (readonly, nonatomic) LNEntity *entity;


+(BOOL)hasInMemoryFindAction;
+(BOOL)hasLibrary;
+(BOOL)isNoteEntity;
+(BOOL)isNoteFolderEntityIdentifier:(id)arg0 ;
+(BOOL)isNotes;
+(BOOL)supportsSecureCoding;
+(id)allProperties;
+(id)allowedOperatorsWithQueryParameterMetadata:(id)arg0 operators:(id)arg1 ;
+(id)localizedCountDescriptionWithValue:(NSInteger)arg0 ;
+(id)metadataForProperties;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)queryMetadata;
+(id)typeDescription;
+(void)initialize;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(Class)classForCoder;
-(Class)classForCopying;
-(Class)classForKeyedArchiver;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)name;
-(void)copyStateToItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif