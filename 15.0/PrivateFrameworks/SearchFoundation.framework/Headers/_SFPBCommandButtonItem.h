// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBCOMMANDBUTTONITEM_H
#define _SFPBCOMMANDBUTTONITEM_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBCommandButtonItem, NSSecureCoding;


#import "_SFPBCommand.h"
#import "_SFPBImage.h"

@interface _SFPBCommandButtonItem : PBCodable <_SFPBCommandButtonItem, NSSecureCoding>



@property (retain, nonatomic) _SFPBCommand *command; // ivar: _command
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SFPBImage *image; // ivar: _image
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *previewButtonItems; // ivar: _previewButtonItems
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)previewButtonItemsAtIndex:(NSUInteger)arg0 ;
-(void)addPreviewButtonItems:(id)arg0 ;
-(void)clearPreviewButtonItems;
-(void)writeTo:(id)arg0 ;


@end


#endif