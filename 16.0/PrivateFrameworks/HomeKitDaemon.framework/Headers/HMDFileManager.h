// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDFILEMANAGER_H
#define HMDFILEMANAGER_H

@class HMFObject, NSString, NSURL;
@protocol HMDFileManager;



@interface HMDFileManager : HMFObject <HMDFileManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSURL *heroFrameStoreDirectoryURL;
@property (readonly, copy) NSURL *legacyHeroFrameStoreDirectoryURL;
@property (readonly) Class superclass;


-(BOOL)copyItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)createDirectoryAtURL:(id)arg0 withIntermediateDirectories:(BOOL)arg1 attributes:(id)arg2 error:(*id)arg3 ;
-(BOOL)fileExistsAtURL:(id)arg0 ;
-(BOOL)isDeletableFileAtPath:(id)arg0 ;
-(BOOL)linkItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeItemAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeData:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)writeDictionary:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeJSONObject:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)zipItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(id)JSONObjectWithURL:(id)arg0 error:(*id)arg1 ;
-(id)dataWithContentsOfURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)fileHandleForReadingFromURL:(id)arg0 error:(*id)arg1 ;
-(void)enumerateItemsAtURL:(id)arg0 includingPropertiesForKeys:(id)arg1 usingBlock:(id)arg2 ;


@end


#endif