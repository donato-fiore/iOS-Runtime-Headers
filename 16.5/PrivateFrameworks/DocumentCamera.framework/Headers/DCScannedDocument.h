// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DCSCANNEDDOCUMENT_H
#define DCSCANNEDDOCUMENT_H

@class NSMutableArray, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface DCScannedDocument : NSObject

@property (retain, nonatomic) NSMutableArray *docInfos; // ivar: _docInfos
@property (readonly, nonatomic) NSUInteger pageCount;
@property (readonly, nonatomic) NSURL *scannedDocumentImageDirectoryURL; // ivar: _scannedDocumentImageDirectoryURL
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)scannedDocumentsFolderURL;
+(void)initialize;
-(BOOL)copyImagesFromDocInfoCollection:(id)arg0 imageCache:(id)arg1 ;
-(BOOL)deleteImage:(id)arg0 ;
-(BOOL)makeSureScanDirectoryExists:(*id)arg0 ;
-(BOOL)saveToURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)numberOfScans;
-(id)URLForImageInFolder:(id)arg0 withUUID:(id)arg1 ;
-(id)URLForImageWithUUID:(id)arg0 ;
-(id)copyImageAtURL:(id)arg0 ;
-(id)copyImageForLoading:(id)arg0 fromFolderURL:(id)arg1 ;
-(id)copyImageForSaving:(id)arg0 toFolderURL:(id)arg1 ;
-(id)getImage:(id)arg0 ;
-(id)getImageURL:(id)arg0 ;
-(id)imageForScanAtIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)imageOfPageAtIndex:(NSUInteger)arg0 ;
-(id)initWithDocInfoCollection:(id)arg0 imageCache:(id)arg1 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)pListURL:(id)arg0 ;
-(void)applicationWillTerminate:(id)arg0 ;
-(void)dealloc;
-(void)deleteAllImages;
-(void)replaceContentsWithDocInfoCollection:(id)arg0 imageCache:(id)arg1 ;


@end


#endif