// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLXPCPHOTOLIBRARYSTOREPOLICYALWAYS_H
#define PLXPCPHOTOLIBRARYSTOREPOLICYALWAYS_H

@class NSString;
@protocol PLXPCPhotoLibraryStorePolicy;

#import <Foundation/Foundation.h>


@interface PLXPCPhotoLibraryStorePolicyAlways : NSObject <PLXPCPhotoLibraryStorePolicy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldUseXPCStoreForDatabasePath:(id)arg0 auditToken:(struct ? )arg1 ;


@end


#endif