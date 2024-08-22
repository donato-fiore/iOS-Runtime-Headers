// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OISFUDATAREPRESENTATION_H
#define OISFUDATAREPRESENTATION_H

@class NSData;

#import <Foundation/Foundation.h>


@interface OISFUDataRepresentation : NSObject {
    BOOL mHasHash;
    unsigned int mHash;
    BOOL mHasSha1Hash;
    NSData *mSha1Hash;
}




-(BOOL)hasSameLocationAs:(id)arg0 ;
-(BOOL)isEncrypted;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReadable;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)dataLength;
-(NSInteger)encodedLength;
-(NSUInteger)hash;
-(NSUInteger)readIntoData:(id)arg0 ;
-(id)bufferedInputStream;
-(id)bufferedInputStreamWithBufferSize:(NSUInteger)arg0 ;
-(id)inputStream;
-(id)sha1Hash;
-(struct CGDataProvider *)cgDataProvider;
-(struct _xmlDoc *)xmlDocument;
-(struct _xmlTextReader *)xmlReader;
-(struct _xmlTextReader *)xmlReaderForGzippedData;
-(struct _xmlTextReader *)xmlReaderForGzippedDataWithInputStream:(*id)arg0 ;
-(struct _xmlTextReader *)xmlReaderWithReadCallback:(*unk)arg0 ;
-(unsigned int)uint32Hash;


@end


#endif