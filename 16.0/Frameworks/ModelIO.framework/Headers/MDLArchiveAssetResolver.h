// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDLARCHIVEASSETRESOLVER_H
#define MDLARCHIVEASSETRESOLVER_H

@class NSURL, NSMutableDictionary, NSString, NSData;
@protocol MDLAssetResolver;

#import <Foundation/Foundation.h>


@interface MDLArchiveAssetResolver : NSObject <MDLAssetResolver>

 {
    NSURL *_archiveURL;
    NSMutableDictionary *_archiveDictionary;
    NSString *_rootUSDPath;
}


@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canResolveAssetNamed:(id)arg0 ;
-(id)assetNamesInArchive;
-(id)initWithURL:(id)arg0 ;
-(id)resolveAssetNamed:(id)arg0 ;
-(id)resolveInsideArchiveWithAssetNamed:(id)arg0 ;
-(void)addResolvedAssetNamed:(id)arg0 offset:(NSUInteger)arg1 fileSize:(NSUInteger)arg2 ;
-(void)removeAssetNamed:(id)arg0 ;


@end


#endif