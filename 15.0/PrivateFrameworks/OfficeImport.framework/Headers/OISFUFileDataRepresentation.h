// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OISFUFILEDATAREPRESENTATION_H
#define OISFUFILEDATAREPRESENTATION_H

@class NSString;
@protocol SFUInputStream;


#import "OISFUDataRepresentation.h"
#import "OISFUCryptoKey.h"

@interface OISFUFileDataRepresentation : OISFUDataRepresentation {
    NSString *mPath;
    int mSharedFd;
    NSInteger mFileLength;
    unsigned int mFileType;
    BOOL mHasFileAttributes;
    NSInteger mPlaintextDataLength;
    OISFUCryptoKey *mCryptoKey;
    id<SFUInputStream> *mInputStream;
    BOOL mDeleteFileWhenDone;
}




-(BOOL)hasSameLocationAs:(id)arg0 ;
-(BOOL)isCryptoKeyIdenticalToKey:(id)arg0 ;
-(BOOL)isEncrypted;
-(BOOL)isReadable;
-(NSInteger)dataLength;
-(NSInteger)encodedLength;
-(id)description;
-(id)initWithCopyOfData:(id)arg0 path:(id)arg1 ;
-(id)initWithCopyOfData:(id)arg0 path:(id)arg1 cryptoKey:(id)arg2 ;
-(id)initWithInputStream:(id)arg0 cryptoKey:(id)arg1 dataLength:(NSInteger)arg2 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 cryptoKey:(id)arg1 dataLength:(NSInteger)arg2 ;
-(id)initWithPath:(id)arg0 sharedFileDescriptor:(int)arg1 ;
-(id)initWithPath:(id)arg0 sharedFileDescriptor:(int)arg1 cryptoKey:(id)arg2 dataLength:(NSInteger)arg3 ;
-(id)inputStream;
-(id)path;
-(unsigned int)fileType;
-(void)dealloc;
-(void)deleteFileWhenDone;
-(void)readFileAttributes;
-(void)setFileType:(unsigned int)arg0 ;


@end


#endif