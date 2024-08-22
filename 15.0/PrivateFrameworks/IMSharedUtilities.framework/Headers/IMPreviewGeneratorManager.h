// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMPREVIEWGENERATORMANAGER_H
#define IMPREVIEWGENERATORMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface IMPreviewGeneratorManager : NSObject

@property (copy, nonatomic) NSDictionary *UTITypes; // ivar: _UTITypes
@property (copy, nonatomic) NSDictionary *dynamicTypes; // ivar: _dynamicTypes


+(id)sharedInstance;
-(BOOL)generateAndPersistContactCardPreviewFromSourceURL:(id)arg0 previewURL:(id)arg1 size:(struct CGSize *)arg2 previewConstraints:(struct IMPreviewConstraints )arg3 error:(*id)arg4 ;
-(BOOL)generateAndPersistMapPreviewFromSourceURL:(id)arg0 previewURL:(id)arg1 size:(struct CGSize *)arg2 previewConstraints:(struct IMPreviewConstraints )arg3 error:(*id)arg4 ;
-(BOOL)generateAndPersistMetadataFromSourceURL:(id)arg0 destinationURL:(id)arg1 size:(struct CGSize *)arg2 constraints:(struct IMPreviewConstraints )arg3 error:(*id)arg4 ;
-(BOOL)generateAndPersistPreviewFromSourceURL:(id)arg0 previewURL:(id)arg1 size:(struct CGSize *)arg2 balloonBundleID:(id)arg3 previewConstraints:(struct IMPreviewConstraints )arg4 error:(*id)arg5 ;
-(BOOL)movePreviewToDiskCache:(id)arg0 previewURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)persistPreviewToDiskCache:(struct CGImage *)arg0 previewURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)sizePreviewFromSourceURL:(id)arg0 size:(struct CGSize *)arg1 previewConstraints:(struct IMPreviewConstraints )arg2 error:(*id)arg3 ;
-(Class)_previewGeneratorClassForSourceURL:(id)arg0 ;
-(Class)previewGeneratorClassForUTIType:(id)arg0 ;
-(id)init;
-(struct CGImage *)newPreviewFromSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif