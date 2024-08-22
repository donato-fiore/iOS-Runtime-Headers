// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMESSAGETEXTATTACHMENT_H
#define MFMESSAGETEXTATTACHMENT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "MFMessageFileWrapper.h"

@interface MFMessageTextAttachment : NSObject {
    NSMutableDictionary *_cache;
}


@property (retain, nonatomic) MFMessageFileWrapper *fileWrapper;


+(NSUInteger)precedenceLevel;
-(BOOL)hasBeenDownloaded;
-(BOOL)isPlaceholder;
-(BOOL)needsRedownload;
-(BOOL)shouldDownloadAttachmentOnDisplay;
-(id)cachedValueForKey:(id)arg0 ;
-(id)description;
-(id)fileWrapperForcingDownload:(BOOL)arg0 ;
-(id)init;
-(id)initWithWrapper:(id)arg0 ;
-(id)mimePart;
-(id)textEncodingGuess;
-(id)textEncodingNameForData:(id)arg0 mimeType:(id)arg1 ;
-(unsigned int)approximateSize;
-(void)download;
-(void)inlineDisplayData:(*id)arg0 mimeType:(*id)arg1 ;
-(void)setCachedValue:(id)arg0 forKey:(id)arg1 ;
-(void)setMimePart:(id)arg0 ;


@end


#endif