// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHCUSTOMCATALOGTRACKER_H
#define SHCUSTOMCATALOGTRACKER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SHCustomCatalog.h"
#import "SHSignatureChunker.h"

@interface SHCustomCatalogTracker : NSObject

@property (readonly, nonatomic) SHCustomCatalog *customCatalog; // ivar: _customCatalog
@property (readonly, nonatomic) SHSignatureChunker *querySignatureChunker; // ivar: _querySignatureChunker
@property (readonly, nonatomic) NSArray *querySignatureChunks; // ivar: _querySignatureChunks


-(id)initWithQuerySignature:(id)arg0 customCatalog:(id)arg1 ;
-(id)trackQuerySignatureChunk:(id)arg0 usingReferenceTrackID:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif