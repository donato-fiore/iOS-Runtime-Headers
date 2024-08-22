// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSBARSITEMIDENTIFIERPROVIDERGENERIC_H
#define PXPHOTOSBARSITEMIDENTIFIERPROVIDERGENERIC_H

@class NSString;
@protocol PXPhotosBarsItemIdentifierProvider;


#import "PXPhotosBarsItemIdentifierProviderBase.h"

@interface PXPhotosBarsItemIdentifierProviderGeneric : PXPhotosBarsItemIdentifierProviderBase <PXPhotosBarsItemIdentifierProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)valuesForModel:(id)arg0 title:(*id)arg1 leadingIdentifiers:(*id)arg2 trailingIdentifiers:(*id)arg3 toolbarIdentifiers:(*id)arg4 ;


@end


#endif