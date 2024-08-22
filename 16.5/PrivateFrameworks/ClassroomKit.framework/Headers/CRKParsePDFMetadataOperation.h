// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKPARSEPDFMETADATAOPERATION_H
#define CRKPARSEPDFMETADATAOPERATION_H

@class CATOperation, NSString;


#import "CRKBook.h"

@interface CRKParsePDFMetadataOperation : CATOperation

@property (readonly, nonatomic) CRKBook *book; // ivar: _book
@property (readonly, nonatomic) NSString *filePath; // ivar: _filePath
@property (readonly, nonatomic) BOOL parseImage; // ivar: _parseImage


-(id)fileName;
-(id)initWithPDFBook:(id)arg0 filePath:(id)arg1 parseImage:(BOOL)arg2 ;
-(id)titleFromDictionaryRef:(struct CGPDFDictionary *)arg0 ;
-(void)main;
-(void)updateAuthor:(id)arg0 ;
-(void)updateTitleWithDictionaryRef:(struct CGPDFDictionary *)arg0 ;


@end


#endif