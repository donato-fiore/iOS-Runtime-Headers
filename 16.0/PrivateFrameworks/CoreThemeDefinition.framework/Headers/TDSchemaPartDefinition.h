// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDSCHEMAPARTDEFINITION_H
#define TDSCHEMAPARTDEFINITION_H

@class NSManagedObject, NSString, CUIImage, NSSet, NSArray;


#import "TDSchemaDefinition.h"

@interface TDSchemaPartDefinition : NSManagedObject

@property (retain, nonatomic) TDSchemaDefinition *element;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) NSUInteger partFeatures; // ivar: partFeatures
@property (retain, nonatomic) CUIImage *previewImage; // ivar: previewImage
@property (retain, nonatomic) NSSet *productions;
@property (retain, nonatomic) NSArray *renditionGroups; // ivar: renditionGroups
@property (copy, nonatomic) NSArray *renditions; // ivar: renditions
@property (retain, nonatomic) NSString *widgetID;


-(NSInteger)_renditionKeyValueForTokenIdentifier:(unsigned short)arg0 ;
-(NSInteger)partID;
-(id)_schema;
-(id)bestPreviewRendition;
-(id)displayName;
-(id)validStatesWithDocument:(id)arg0 ;
-(struct ? *)cuiPartDefinition;
-(void)dealloc;
-(void)didTurnIntoFault;
-(void)updateDerivedRenditionData;


@end


#endif