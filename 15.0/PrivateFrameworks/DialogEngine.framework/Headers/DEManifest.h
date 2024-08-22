// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEMANIFEST_H
#define DEMANIFEST_H

@class NSDictionary, NSURL, NSData, NSString;

#import <Foundation/Foundation.h>


@interface DEManifest : NSObject

@property (retain, nonatomic) NSDictionary *contents; // ivar: _contents
@property (nonatomic) NSUInteger dirDownloadType; // ivar: _dirDownloadType
@property (retain, nonatomic) NSURL *downloadURLPrefix; // ivar: _downloadURLPrefix
@property (retain, nonatomic) NSData *keyVersion; // ivar: _keyVersion
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSURL *publicationURL; // ivar: _publicationURL
@property (retain, nonatomic) NSData *summary; // ivar: _summary
@property (nonatomic) BOOL testOnly; // ivar: _testOnly
@property (retain, nonatomic) NSData *version; // ivar: _version


+(id)anyManifestWithContentsOfURL:(id)arg0 encrypted:(BOOL)arg1 ;
+(id)anyManifestWithContentsOfURL:(id)arg0 wasEncrypted:(*BOOL)arg1 ;
+(id)manifestWithContentsOfURL:(id)arg0 ;
+(id)manifestWithContentsOfURL:(id)arg0 encrypted:(BOOL)arg1 ;
+(id)manifestWithContentsOfURL:(id)arg0 encrypted:(BOOL)arg1 allowAllKeys:(BOOL)arg2 filter:(id)arg3 ;
+(id)manifestWithContentsOfURL:(id)arg0 encrypted:(BOOL)arg1 filter:(id)arg2 ;
+(id)manifestWithContentsOfURL:(id)arg0 wasEncrypted:(*BOOL)arg1 allowAllKeys:(BOOL)arg2 filter:(id)arg3 ;
+(id)manifestWithContentsOfURL:(id)arg0 wasEncrypted:(*BOOL)arg1 filter:(id)arg2 ;
-(BOOL)writeToURL:(id)arg0 ;
-(BOOL)writeToURL:(id)arg0 keyId:(NSUInteger)arg1 privateKey:(id)arg2 ;
-(id)init;
-(id)initWithName:(id)arg0 contents:(id)arg1 summary:(id)arg2 dirDownloadType:(NSUInteger)arg3 ;
-(id)initWithName:(id)arg0 contents:(id)arg1 summary:(id)arg2 dirDownloadType:(NSUInteger)arg3 version:(id)arg4 keyVersion:(id)arg5 ;


@end


#endif