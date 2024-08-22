// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OCIMPORTER_H
#define OCIMPORTER_H

@class NSURL, NSData, NSString;


#import "OCMapper.h"
#import "OCDReader.h"
#import "OITSUProgressContext.h"

@interface OCImporter : OCMapper {
    NSURL *mURL;
    NSData *mData;
    OCDReader *mReader;
    BOOL mTryAlternateReader;
}


@property (copy, nonatomic) NSString *lastPasswordAttempted; // ivar: _lastPasswordAttempted
@property (copy, nonatomic) id *officeDOMInspector; // ivar: mOfficeDOMInspector
@property (retain) OITSUProgressContext *progressContext; // ivar: mProgressContext


+(BOOL)URLIsXML:(id)arg0 ;
+(Class)binaryReaderClass;
+(Class)readerClassForURL:(id)arg0 ;
+(Class)xmlReaderClass;
+(id)xmlPathExtensions;
+(void)initialize;
-(BOOL)isDocumentEncryptedUnsupportedVersion:(*BOOL)arg0 errorMessage:(*id)arg1 ;
-(BOOL)isDocumentEncryptedUnsupportedVersionHelper:(*BOOL)arg0 errorMessage:(*id)arg1 readError:(*BOOL)arg2 ;
-(BOOL)isXML;
-(BOOL)setPassphrase:(id)arg0 ;
-(BOOL)start;
-(BOOL)tryAlternateReader;
-(Class)readerClass;
-(id)displayName;
-(id)filename;
-(id)initWithData:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)url;
-(void)dealloc;
-(void)finalizeWithDocumentState:(id)arg0 ;
-(void)setURL:(id)arg0 ;


@end


#endif