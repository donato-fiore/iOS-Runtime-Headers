// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHIMPORTLIBRARYASSET_H
#define PHIMPORTLIBRARYASSET_H



#import "PHImportAsset.h"

@interface PHImportLibraryAsset : PHImportAsset {
    BOOL _isPenultimate;
}




+(BOOL)isValidAsSidecar:(id)arg0 ;
-(BOOL)canDelete;
-(BOOL)canReference;
-(BOOL)isBase;
-(BOOL)isRender;
-(BOOL)isSidecar;
-(BOOL)shouldPreserveUUID;
-(id)initWithSource:(id)arg0 url:(id)arg1 type:(id)arg2 supportedMediaType:(unsigned char)arg3 uuid:(id)arg4 ;
-(id)makeImportIdentifier;
-(id)nameKey;
-(void)configureSidecarTypeForExtension:(id)arg0 ;


@end


#endif