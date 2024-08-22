// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKSTRUCTUREDTEXTIMPORTSETTINGS_H
#define TSKSTRUCTUREDTEXTIMPORTSETTINGS_H

@class NSIndexSet, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSKStructuredTextImportSettings : NSObject <NSCopying>



@property (nonatomic) BOOL automaticDelimiters; // ivar: _automaticDelimiters
@property (nonatomic) BOOL automaticOffsets; // ivar: _automaticOffsets
@property (nonatomic) BOOL collapseConsecutiveDelimiters; // ivar: _collapseConsecutiveDelimiters
@property (copy, nonatomic) NSIndexSet *columnOffsets; // ivar: _columnOffsets
@property (copy, nonatomic) NSSet *decimalSeparators; // ivar: _decimalSeparators
@property (copy, nonatomic) NSSet *delimiters; // ivar: _delimiters
@property (readonly, nonatomic) BOOL hasAnyAutomaticSettings;
@property (nonatomic) NSUInteger sourceEncoding; // ivar: _sourceEncoding
@property (nonatomic) NSUInteger startingRow; // ivar: _startingRow
@property (copy, nonatomic) NSSet *textQualifiers; // ivar: _textQualifiers
@property (copy, nonatomic) NSSet *thousandsSeparators; // ivar: _thousandsSeparators
@property (nonatomic) BOOL transposeRowsAndColumns; // ivar: _transposeRowsAndColumns
@property (nonatomic) NSInteger type; // ivar: _type


+(id)keyPathsForValuesAffectingIsValid;
+(id)settings;
+(id)settingsFromArchive:(*void)arg0 ;
+(id)settingsWithType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)errorString;
-(id)init;
-(id)initFromArchive:(*void)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)encodeToArchive:(*void)arg0 ;


@end


#endif