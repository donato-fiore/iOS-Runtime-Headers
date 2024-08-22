// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPMAPSSUPPORT_H
#define PPMAPSSUPPORT_H


#import <Foundation/Foundation.h>


@interface PPMapsSupport : NSObject



+(BOOL)harvestMapItem:(id)arg0 documentIdentifier:(id)arg1 groupIdentifier:(id)arg2 includingPostalAddress:(BOOL)arg3 localNamedEntityStore:(id)arg4 localLocationStore:(id)arg5 error:(*id)arg6 ;
+(void)importMapsDataWithCollectionQuery:(id)arg0 localNamedEntityStore:(id)arg1 localLocationStore:(id)arg2 shouldContinueBlock:(id)arg3 ;
+(void)importMapsDataWithFavoriteQuery:(id)arg0 localNamedEntityStore:(id)arg1 localLocationStore:(id)arg2 shouldContinueBlock:(id)arg3 ;
+(void)importMapsDataWithShouldContinueBlock:(id)arg0 ;


@end


#endif