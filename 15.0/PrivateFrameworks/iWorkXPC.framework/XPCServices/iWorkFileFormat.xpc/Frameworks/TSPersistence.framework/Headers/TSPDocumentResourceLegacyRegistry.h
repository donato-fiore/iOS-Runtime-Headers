// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDOCUMENTRESOURCELEGACYREGISTRY_H
#define TSPDOCUMENTRESOURCELEGACYREGISTRY_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TSPDocumentResourceLegacyRegistry : NSObject {
    NSDictionary *_metadataDictionary;
}


@property (readonly) NSDictionary *metadataDictionary;


+(id)sharedSageRegistry;
+(id)sharedTangierRegistry;
-(id)documentResourceLegacyInfoForApplicationRelativePath:(id)arg0 ;
-(id)init;
-(id)initWithMetadataDictionary:(id)arg0 ;
-(id)initWithMetadataURL:(id)arg0 ;
-(id)metadataDictionaryKeyForRelativePath:(id)arg0 ;


@end


#endif