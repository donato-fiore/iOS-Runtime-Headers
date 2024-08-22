// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTSTRUCTUREDTEXTIMPORTRECORD_H
#define TSTSTRUCTUREDTEXTIMPORTRECORD_H

@class NSDate, TSKStructuredTextImportSettings, NSURL, NSArray, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSTCellRegion.h"

@interface TSTStructuredTextImportRecord : NSObject <NSCopying>



@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (retain, nonatomic) NSDate *importDate; // ivar: _importDate
@property (retain, nonatomic) TSKStructuredTextImportSettings *importSettings; // ivar: _importSettings
@property (retain, nonatomic) NSURL *importSource; // ivar: _importSource
@property (retain, nonatomic) TSTCellRegion *importedRegion; // ivar: _importedRegion
@property (retain, nonatomic) NSArray *pasteInverseCommands; // ivar: _pasteInverseCommands
@property (nonatomic) NSUInteger pasteType; // ivar: _pasteType
@property (nonatomic) BOOL pasteWasUpdate; // ivar: _pasteWasUpdate
@property (readonly, nonatomic, getter=isReimportable) BOOL reimportable;
@property (nonatomic) NSUInteger sourceColumnCount; // ivar: _sourceColumnCount
@property (copy, nonatomic) NSData *sourceData; // ivar: _sourceData
@property (nonatomic) NSUInteger sourceRowCount; // ivar: _sourceRowCount
@property (readonly, nonatomic, getter=isWholeTableImport) BOOL wholeTableImport;


+(id)record;
+(id)recordFromArchive:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromArchive:(*void)arg0 ;
-(void)encodeToArchive:(*void)arg0 ;


@end


#endif