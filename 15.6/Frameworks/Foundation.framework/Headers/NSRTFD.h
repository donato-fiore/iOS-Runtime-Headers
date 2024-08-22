// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSRTFD_H
#define NSRTFD_H

@class NSMutableDictionary;



@interface NSRTFD : NSMutableDictionary {
    NSMutableDictionary *dict;
}




+(void)initialize;
-(BOOL)_isLink:(id)arg0 ;
-(BOOL)isPackage;
-(NSInteger)validatePath:(id)arg0 ignore:(id)arg1 ;
-(NSUInteger)addDirNamed:(id)arg0 ;
-(NSUInteger)addFileNamed:(id)arg0 fileAttributes:(id)arg1 ;
-(NSUInteger)count;
-(NSUInteger)initUnixFile:(id)arg0 ;
-(NSUInteger)insertItem:(id)arg0 path:(id)arg1 dirInfo:(id)arg2 zone:(struct _NSZone *)arg3 plist:(id)arg4 ;
-(NSUInteger)internalSaveTo:(id)arg0 removeBackup:(BOOL)arg1 errorHandler:(id)arg2 ;
-(NSUInteger)internalSaveTo:(id)arg0 removeBackup:(BOOL)arg1 errorHandler:(id)arg2 temp:(id)arg3 backup:(id)arg4 ;
-(NSUInteger)internalWritePath:(id)arg0 errorHandler:(id)arg1 remapContents:(BOOL)arg2 hardLinkPath:(id)arg3 ;
-(NSUInteger)saveToDocument:(id)arg0 removeBackup:(BOOL)arg1 errorHandler:(id)arg2 ;
-(NSUInteger)writePath:(id)arg0 docInfo:(id)arg1 errorHandler:(id)arg2 remapContents:(BOOL)arg3 hardLinkPath:(id)arg4 ;
-(NSUInteger)writePath:(id)arg0 docInfo:(id)arg1 errorHandler:(id)arg2 remapContents:(BOOL)arg3 markBusy:(BOOL)arg4 hardLinkPath:(id)arg5 ;
-(id)_getDocInfoForKey:(id)arg0 ;
-(id)addCommon:(id)arg0 docInfo:(id)arg1 value:(id)arg2 zone:(struct _NSZone *)arg3 ;
-(id)addData:(id)arg0 name:(id)arg1 ;
-(id)addFile:(id)arg0 ;
-(id)addLink:(id)arg0 ;
-(id)copy;
-(id)copy:(id)arg0 into:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createRandomKey:(id)arg0 ;
-(id)createUniqueKey:(id)arg0 ;
-(id)dataForFile:(id)arg0 ;
-(id)dataRepresentation;
-(id)freeSerialized:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)getDirInfo:(BOOL)arg0 ;
-(id)getDocument:(id)arg0 docInfo:(id)arg1 ;
-(id)init;
-(id)initFromDocument:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)initFromElement:(id)arg0 ofDocument:(id)arg1 ;
-(id)initFromSerialized:(id)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithDataRepresentation:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 copyItems:(BOOL)arg1 ;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithPasteboardDataRepresentation:(id)arg0 ;
-(id)keyEnumerator;
-(id)nameFromPath:(id)arg0 extra:(id)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(id)pasteboardDataRepresentation;
-(id)removeFile:(id)arg0 ;
-(id)replaceFile:(id)arg0 data:(id)arg1 ;
-(id)replaceFile:(id)arg0 path:(id)arg1 ;
-(id)serialize:(**void)arg0 length:(*NSUInteger)arg1 ;
-(id)setPackage:(BOOL)arg0 ;
-(id)tmpNameFromPath:(id)arg0 ;
-(id)tmpNameFromPath:(id)arg0 extension:(id)arg1 ;
-(id)uniqueKey:(id)arg0 ;
-(void)dealloc;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif