// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPPACKAGECONVERTER_H
#define TSPPACKAGECONVERTER_H

@class TSUExtendedAttributeCollection, NSURL;
@protocol TSPFileCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "TSPPackage.h"

@interface TSPPackageConverter : NSObject {
    id<TSPFileCoordinatorDelegate> *_fileCoordinatorDelegate;
    TSUExtendedAttributeCollection *_extendedAttributeCollection;
}


@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) TSPPackage *package; // ivar: _package
@property (readonly, nonatomic) NSInteger packageType;


+(BOOL)convertDocumentAtURL:(id)arg0 toPackageType:(NSInteger)arg1 removeEntriesMatchingFilter:(id)arg2 error:(*id)arg3 ;
+(id)newPackageConverterWithURL:(id)arg0 error:(*id)arg1 ;
+(id)newPackageConverterWithURL:(id)arg0 preserveExtendedAttributes:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)checkPassword:(id)arg0 ;
-(BOOL)enumeratePackageEntriesWithZipArchive:(id)arg0 needsReadChannel:(BOOL)arg1 accessor:(id)arg2 ;
-(BOOL)hasEntriesMatchingFilter:(id)arg0 ;
-(BOOL)isDataPath:(id)arg0 ;
-(BOOL)isDocumentPropertiesPath:(id)arg0 ;
-(BOOL)isObjectArchivePath:(id)arg0 ;
-(BOOL)path:(id)arg0 matchesFilter:(id)arg1 ;
-(BOOL)writeToURL:(id)arg0 packageType:(NSInteger)arg1 removeEntriesMatchingFilter:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)progressTotalUnitCountWithZipArchive:(id)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 package:(id)arg1 fileCoordinatorDelegate:(id)arg2 preserveExtendedAttributes:(BOOL)arg3 error:(*id)arg4 ;
-(id)newWriteChannelAtPath:(id)arg0 lastModificationDate:(id)arg1 size:(NSUInteger)arg2 CRC:(unsigned int)arg3 packageWriter:(id)arg4 error:(*id)arg5 ;


@end


#endif