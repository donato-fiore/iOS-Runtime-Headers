// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELVERIFYLOCALFILEASSETINTEGRITYREQUEST_H
#define MPMODELVERIFYLOCALFILEASSETINTEGRITYREQUEST_H


#import <Foundation/Foundation.h>

#import "MPModelFileAsset.h"
#import "MPIdentifierSet.h"

@interface MPModelVerifyLocalFileAssetIntegrityRequest : NSObject

@property (retain, nonatomic) MPModelFileAsset *fileAsset; // ivar: _fileAsset
@property (retain, nonatomic) MPIdentifierSet *sourceItemIdentifiers; // ivar: _sourceItemIdentifiers


+(id)_operationQueue;
-(id)initWithFileAsset:(id)arg0 sourceItemIdentifiers:(id)arg1 ;
-(id)mediaLibraryForItemIdentifiers:(id)arg0 ;
-(void)performWithResponseHandler:(id)arg0 ;


@end


#endif