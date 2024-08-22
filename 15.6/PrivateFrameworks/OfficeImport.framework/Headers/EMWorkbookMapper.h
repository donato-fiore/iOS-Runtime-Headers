// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMWORKBOOKMAPPER_H
#define EMWORKBOOKMAPPER_H

@class NSMutableArray, NSString;
@protocol CMMapperRoot;


#import "CMDocumentMapper.h"
#import "OIXMLDocument.h"
#import "OIXMLElement.h"
#import "EDWorkbook.h"

@interface EMWorkbookMapper : CMDocumentMapper <CMMapperRoot>

 {
    NSUInteger mRealSheetCount;
    int mWidth;
    int mHeight;
    NSMutableArray *mWorksheetUrls;
    NSMutableArray *mWorksheetNames;
    NSMutableArray *mWorksheetGuids;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    NSString *mStyleSheetGuid;
    unsigned int mSheetIndex;
    BOOL mIsFirstMappedSheet;
    BOOL mIsFrameset;
    OIXMLDocument *mXhtmlDoc;
    OIXMLElement *mBodyElement;
    OIXMLDocument *mTabBarDoc;
    NSString *mTabBarURL;
    NSMutableArray *mSheetURLs;
    CGFloat mTabPosition;
    NSUInteger mNumberOfMappedSheets;
    BOOL mHasPushedHeader;
    BOOL mHasPushedFirstSheet;
    BOOL mLoadingMessageVisible;
}


@property (readonly) EDWorkbook *document;
@property (retain) NSString *fileName; // ivar: mFileName


+(id)borderStyleCache;
+(id)borderWidthCache;
+(id)cssStyleCache;
-(BOOL)hasMultipleSheets;
-(id)_copyStringForSheet:(id)arg0 atIndex:(NSUInteger)arg1 withState:(id)arg2 andMapper:(id)arg3 ;
-(id)_frontPageByCopyingMainPage;
-(id)_mainPageBack;
-(id)archiver;
-(id)blipAtIndex:(unsigned int)arg0 ;
-(id)copySheetMapperWithEdSheet:(id)arg0 ;
-(id)headElementForFrontPage;
-(id)initWithDocument:(id)arg0 archiver:(id)arg1 ;
-(id)styleMatrix;
-(id)tabTitleDrawingAttributes;
-(struct CGSize )pageSizeForDevice;
-(void)_pushTabForSheet:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)finishMappingWithState:(id)arg0 ;
-(void)mapElement:(id)arg0 atIndex:(NSUInteger)arg1 withState:(id)arg2 isLastElement:(BOOL)arg3 ;
-(void)mapStylesheetData:(id)arg0 name:(id)arg1 atElement:(id)arg2 ;
-(void)mapStylesheetNamed:(id)arg0 atElement:(id)arg1 ;
-(void)setElementCount:(NSUInteger)arg0 ;
-(void)startMappingWithState:(id)arg0 ;


@end


#endif