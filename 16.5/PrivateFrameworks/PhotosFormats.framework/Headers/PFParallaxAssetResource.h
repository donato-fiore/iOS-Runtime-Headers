// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFPARALLAXASSETRESOURCE_H
#define PFPARALLAXASSETRESOURCE_H

@class NSData, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface PFParallaxAssetResource : NSObject

@property (copy, nonatomic) NSData *adjustmentData; // ivar: _adjustmentData
@property (copy, nonatomic) NSString *adjustmentFormat; // ivar: _adjustmentFormat
@property (copy, nonatomic) NSString *adjustmentVersion; // ivar: _adjustmentVersion
@property (readonly, nonatomic) NSURL *archiveURL; // ivar: _archiveURL
@property (copy, nonatomic) NSString *fileType; // ivar: _fileType
@property (copy, nonatomic) NSURL *imageFileURL; // ivar: _imageFileURL
@property (nonatomic) unsigned int orientation; // ivar: _orientation
@property (retain, nonatomic) *CGImage proxyImage; // ivar: _proxyImage
@property (readonly, nonatomic, getter=isProxyOnly) BOOL proxyOnly;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)saveImage:(struct CGImage *)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(struct CGImage *)newImageWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadContentsFromDictionary:(id)arg0 proxyPath:(*id)arg1 imagePath:(*id)arg2 adjustmentPath:(*id)arg3 error:(*id)arg4 ;
-(BOOL)loadFromArchiveURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveToArchiveURL:(id)arg0 error:(*id)arg1 ;
-(id)contentsDictionary;
-(id)init;
-(void)dealloc;


@end


#endif