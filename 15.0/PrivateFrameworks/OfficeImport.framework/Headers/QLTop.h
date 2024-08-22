// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLTOP_H
#define QLTOP_H

@class NSString;
@protocol OCDReaderDelegate;

#import <Foundation/Foundation.h>

#import "CMArchiveManager.h"
#import "OCDDocument.h"
#import "CMMapper.h"
#import "CMState.h"

@interface QLTop : NSObject <OCDReaderDelegate>

 {
    CMArchiveManager *_archiver;
    OCDDocument *_document;
    NSString *_fileName;
    NSUInteger _format;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL forIndexing; // ivar: _forIndexing
@property (readonly) NSUInteger hash;
@property (readonly) CMMapper *mapper; // ivar: _mapper
@property (readonly) CMState *state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)supportsProgressiveMapping;
+(id)metadataForBinaryOfficeFileAtURL:(id)arg0 error:(*id)arg1 ;
+(id)searchableAttributesForBinaryOfficeFileAtURL:(id)arg0 error:(*id)arg1 ;
+(void)fillHTMLArchiveForOfficeData:(id)arg0 fileName:(id)arg1 dataFormat:(NSUInteger)arg2 archiver:(id)arg3 ;
+(void)fillHTMLArchiveForOfficeFile:(id)arg0 dataFormat:(NSUInteger)arg1 archiver:(id)arg2 ;
+(void)fillHTMLArchiveForOfficeFile:(id)arg0 orData:(id)arg1 dataFileName:(id)arg2 dataFormat:(NSUInteger)arg3 archiver:(id)arg4 ;
-(Class)mapperClassForIndexing:(BOOL)arg0 ;
-(Class)readerClassForBinaryDocuments;
-(Class)readerClassForXMLDocuments;
-(id)documentWithFile:(id)arg0 orData:(id)arg1 isXML:(BOOL)arg2 archiver:(id)arg3 ;
-(void)initializeClasses;
-(void)readFile:(id)arg0 orData:(id)arg1 dataFileName:(id)arg2 format:(NSUInteger)arg3 archiver:(id)arg4 forIndexing:(BOOL)arg5 ;
-(void)readerDidEndDocument:(id)arg0 ;
-(void)readerDidReadElement:(id)arg0 atIndex:(NSUInteger)arg1 inDocument:(id)arg2 isLastElement:(BOOL)arg3 ;
-(void)readerDidStartDocument:(id)arg0 withElementCount:(NSInteger)arg1 ;
-(void)setupMappingStateWithDocument:(id)arg0 ;


@end


#endif