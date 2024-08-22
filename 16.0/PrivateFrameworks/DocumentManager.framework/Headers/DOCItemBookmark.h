// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCITEMBOOKMARK_H
#define DOCITEMBOOKMARK_H

@class FPSandboxingURLWrapper, NSString, UTType, FPItem, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DOCItemBookmark : NSObject <NSSecureCoding>

 {
    FPSandboxingURLWrapper *_wrapper;
    BOOL _needsToBeImported;
}


@property (retain) NSString *bookmarkableString; // ivar: _bookmarkableString
@property (copy, nonatomic) UTType *contentType; // ivar: _contentType
@property (retain) FPItem *fileProviderItem; // ivar: _fileProviderItem
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL


+(BOOL)isAnyFPItemAFault:(id)arg0 ;
+(BOOL)isAnyItemBookmarkAFault:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_contentTypeForURL:(id)arg0 ;
+(id)_wrapperForURL:(id)arg0 error:(*id)arg1 ;
+(id)documentsURLsForItemBookmarks:(id)arg0 ;
+(void)_fetchDocumentURLFromBookmarkableString:(id)arg0 completion:(id)arg1 ;
-(BOOL)needsToBeImported;
-(id)coordinatedFileURL;
-(id)description;
-(id)initWithBookmarkableString:(id)arg0 fileProviderItem:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 fileProviderItem:(id)arg1 ;
-(void)convertAndCopyURLToInbox:(id)arg0 ofType:(id)arg1 conversionRules:(id)arg2 completion:(id)arg3 ;
-(void)copyURLToInbox:(id)arg0 completion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareForMode:(NSUInteger)arg0 usingBookmark:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)prepareForMode:(NSUInteger)arg0 usingBookmark:(BOOL)arg1 shouldConvert:(BOOL)arg2 conversionRules:(id)arg3 completionBlock:(id)arg4 ;
-(void)setNeedsToBeImported:(BOOL)arg0 ;


@end


#endif