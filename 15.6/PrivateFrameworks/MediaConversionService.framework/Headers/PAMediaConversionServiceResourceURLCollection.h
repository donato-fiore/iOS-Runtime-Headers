// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAMEDIACONVERSIONSERVICERESOURCEURLCOLLECTION_H
#define PAMEDIACONVERSIONSERVICERESOURCEURLCOLLECTION_H

@class PAMediaConversionServiceResourceURLCollectionAccessProvider, NSError, NSDictionary, NSURL, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PAMediaConversionServiceResourceURLCollection : NSObject

@property (retain) PAMediaConversionServiceResourceURLCollectionAccessProvider *accessProviderDelegate; // ivar: _accessProviderDelegate
@property (readonly) BOOL allURLsAreReadable;
@property (readonly) NSError *blastDoorError;
@property (readonly) NSDictionary *blastDoorMainSourceProperties;
@property (readonly) NSURL *blastDoorSourceURL;
@property (readonly) NSDictionary *blastDoorVideoComplementProperties;
@property (readonly) BOOL isBlastDoorAccessRequired;
@property (readonly) NSUInteger urlCount;
@property (retain) NSMutableDictionary *urlReferencesByRole; // ivar: _urlReferencesByRole


+(BOOL)getSignatureString:(*id)arg0 filenameSummary:(*id)arg1 forDictionaryRepresentation:(id)arg2 ;
+(id)collectionForBookmarkDataDictionaryRepresentation:(id)arg0 accessProvider:(id)arg1 error:(*id)arg2 ;
+(id)collectionWithMainResourceURL:(id)arg0 ;
+(id)filenameSummaryStringForDictionaryRepresentation:(id)arg0 ;
-(BOOL)containsAllRoles:(id)arg0 ;
-(BOOL)containsAnyRole:(id)arg0 ;
-(BOOL)copyURL:(id)arg0 forRole:(id)arg1 toDirectory:(id)arg2 error:(*id)arg3 ;
-(BOOL)ensureFilesExistWithError:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)removeExistingEmptyFilesWithError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)bookmarkDataDictionaryRepresentationWithError:(*id)arg0 ;
-(id)description;
-(id)fileSizeSummary;
-(id)filenameExtensionAndPathHashForRole:(id)arg0 ;
-(id)init;
-(id)logMessageSummary;
-(id)logMessageSummaryWithFullPath:(BOOL)arg0 ;
-(id)resourceURLForRole:(id)arg0 ;
-(id)typeIdentifierForResourceURLWithRole:(id)arg0 ;
-(id)urlForDebugDumpWithDirectoryName:(id)arg0 inExistingParentDirectory:(id)arg1 error:(*id)arg2 ;
-(void)enumerateResourceURLReferences:(id)arg0 ;
-(void)enumerateResourceURLs:(id)arg0 ;
-(void)setResourceURL:(id)arg0 forRole:(id)arg1 ;
-(void)setResourceURL:(id)arg0 forRole:(id)arg1 deleteOnDeallocation:(BOOL)arg2 ;
-(void)setShouldDeleteURLOnDeallocation:(BOOL)arg0 forRole:(id)arg1 ;


@end


#endif