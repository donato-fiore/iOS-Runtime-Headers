// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPUBLISHMMCSPROTOCOL_H
#define MSPUBLISHMMCSPROTOCOL_H

@class NSMutableDictionary, NSString;
@protocol MSPublishStorageProtocol, MSPublishStorageProtocolDelegate;


#import "MSMMCSProtocol.h"

@interface MSPublishMMCSProtocol : MSMMCSProtocol <MSPublishStorageProtocol>

 {
    NSMutableDictionary *_itemIDToAssetDict;
    *NSUInteger _itemIDs;
    *char * _signatures;
    *char * _authTokens;
    *unsigned int _itemFlags;
    NSInteger _itemsInFlight;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<MSPublishStorageProtocolDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_getUTIFromItem:(NSUInteger)arg0 ;
-(id)initWithPersonID:(id)arg0 ;
-(int)_getFileDescriptorFromItem:(NSUInteger)arg0 ;
-(void)_putItemDone:(NSUInteger)arg0 putReceipt:(id)arg1 error:(id)arg2 ;
-(void)_putItemsFailure;
-(void)_requestCompleted;
-(void)computeHashForAsset:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)publishAssets:(id)arg0 URL:(id)arg1 ;


@end


#endif