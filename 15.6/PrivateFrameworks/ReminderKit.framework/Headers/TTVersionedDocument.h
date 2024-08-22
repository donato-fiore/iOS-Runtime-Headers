// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTVERSIONEDDOCUMENT_H
#define TTVERSIONEDDOCUMENT_H


#import <Foundation/Foundation.h>


@interface TTVersionedDocument : NSObject

@property (nonatomic) *void documentArchive; // ivar: _documentArchive
@property (readonly, nonatomic) NSUInteger futureVersionCount;


+(unsigned int)minimumSupportedVersion;
+(unsigned int)serializationVersion;
+(unsigned int)versionedDocumentSerializationVersion;
-(NSUInteger)mergeWithVersionedDocument:(id)arg0 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)serialize;
-(id)serializeCurrentVersion:(*unsigned int)arg0 ;
-(unsigned int)maxDocumentVersion;
-(void)dealloc;
-(void)loadArchive:(*void)arg0 ;
-(void)loadData:(id)arg0 ;
-(void)loadDocumentArchive:(*void)arg0 ;
-(void)mergeVersion:(unsigned int)arg0 fromData:(id)arg1 ;
-(void)saveCurrentVersion:(*void)arg0 ;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif