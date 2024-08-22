// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICARCHIVEWRITER_H
#define ICARCHIVEWRITER_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface ICArchiveWriter : NSObject {
    *archive _archive;
}


@property (retain, nonatomic) NSString *basePath; // ivar: _basePath
@property (retain, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (nonatomic) BOOL flatten; // ivar: _flatten
@property (copy, nonatomic) NSString *flattenFolderName; // ivar: _flattenFolderName
@property (nonatomic) BOOL usesCompression; // ivar: _usesCompression


-(BOOL)finish:(*id)arg0 ;
-(BOOL)open:(*id)arg0 ;
-(BOOL)writeURL:(id)arg0 isDirectory:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)writeURLs:(id)arg0 error:(*id)arg1 ;
-(id)initWithDestinationURL:(id)arg0 baseURL:(id)arg1 ;
-(void)dealloc;


@end


#endif