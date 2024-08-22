// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCANFCONTENT_H
#define FCANFCONTENT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "FCAssetHandle.h"

@interface FCANFContent : NSObject

@property (readonly, nonatomic) NSArray *anfDocumentAssetHandles;
@property (readonly, nonatomic) NSArray *fontResourceIDs; // ivar: _fontResourceIDs
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isANFDocumentCached;
@property (readonly, nonatomic) FCAssetHandle *mainDocumentAssetHandle; // ivar: _mainDocumentAssetHandle


-(id)fetchANFDocumentDataProviderWithCompletion:(id)arg0 ;
-(id)fetchANFDocumentDataProviderWithPriority:(NSInteger)arg0 completion:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 mainDocumentAssetHandle:(id)arg1 fontResourceIDs:(id)arg2 ;


@end


#endif