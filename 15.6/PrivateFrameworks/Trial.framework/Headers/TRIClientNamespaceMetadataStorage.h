// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRICLIENTNAMESPACEMETADATASTORAGE_H
#define TRICLIENTNAMESPACEMETADATASTORAGE_H

@class NSString;
@protocol TRIClientNamespaceMetadataStoring, TRIPaths;

#import <Foundation/Foundation.h>


@interface TRIClientNamespaceMetadataStorage : NSObject <TRIClientNamespaceMetadataStoring>

 {
    id<TRIPaths> *_paths;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPaths:(id)arg0 ;
-(id)loadNamespaceMetadataForNamespaceName:(id)arg0 error:(*id)arg1 ;
-(id)urlForNamespaceMetadataForNamespaceName:(id)arg0 ;


@end


#endif