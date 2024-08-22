// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBTABLEHEADERROWCARDSECTION_H
#define _SFPBTABLEHEADERROWCARDSECTION_H

@class PBCodable, NSArray, NSString, NSData;
@protocol _SFPBTableHeaderRowCardSection, NSSecureCoding;


#import "_SFPBTableAlignmentSchema.h"
#import "_SFPBColor.h"

@interface _SFPBTableHeaderRowCardSection : PBCodable <_SFPBTableHeaderRowCardSection, NSSecureCoding>



@property (nonatomic) BOOL alignRowsToHeader; // ivar: _alignRowsToHeader
@property (retain, nonatomic) _SFPBTableAlignmentSchema *alignmentSchema; // ivar: _alignmentSchema
@property (retain, nonatomic) _SFPBColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (copy, nonatomic) NSArray *datas; // ivar: _datas
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSubHeader; // ivar: _isSubHeader
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (nonatomic) BOOL reducedRowHeight; // ivar: _reducedRowHeight
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *tabGroupIdentifier; // ivar: _tabGroupIdentifier
@property (copy, nonatomic) NSString *tableIdentifier; // ivar: _tableIdentifier
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (nonatomic) int verticalAlign; // ivar: _verticalAlign


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)dataCount;
-(id)dataAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)punchoutOptionsAtIndex:(NSUInteger)arg0 ;
-(void)addData:(id)arg0 ;
-(void)addPunchoutOptions:(id)arg0 ;
-(void)clearData;
-(void)clearPunchoutOptions;
-(void)setData:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif