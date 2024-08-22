// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDOCUMENTRESOURCEREGISTRY_H
#define TSPDOCUMENTRESOURCEREGISTRY_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TSPDocumentResourceRegistry : NSObject {
    NSDictionary *_metadataDictionary;
}


@property (readonly) NSDictionary *metadataDictionary;


+(id)sharedRegistry;
-(id)documentResourceInfoForDigestString:(id)arg0 locator:(id)arg1 ;
-(id)documentResourceInfosForTags:(id)arg0 ;
-(id)init;
-(id)initWithMetadataDictionary:(id)arg0 ;
-(id)initWithMetadataURL:(id)arg0 ;
-(id)localStrategyProviderForDocumentResourceInfos:(id)arg0 ;


@end


#endif