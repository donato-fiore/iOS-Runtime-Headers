// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSBARSITEMIDENTIFIERPROVIDERRECENTLYDELETED_H
#define PXPHOTOSBARSITEMIDENTIFIERPROVIDERRECENTLYDELETED_H

@class NSString;
@protocol PXPhotosBarsItemIdentifierProvider;


#import "PXPhotosBarsItemIdentifierProviderBase.h"

@interface PXPhotosBarsItemIdentifierProviderRecentlyDeleted : PXPhotosBarsItemIdentifierProviderBase <PXPhotosBarsItemIdentifierProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)valuesForModel:(id)arg0 title:(*id)arg1 leadingIdentifiers:(*id)arg2 trailingIdentifiers:(*id)arg3 toolbarIdentifiers:(*id)arg4 ;


@end


#endif