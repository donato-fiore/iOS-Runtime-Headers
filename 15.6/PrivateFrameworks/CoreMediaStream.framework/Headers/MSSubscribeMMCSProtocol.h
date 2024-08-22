// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSSUBSCRIBEMMCSPROTOCOL_H
#define MSSUBSCRIBEMMCSPROTOCOL_H

@class NSMutableDictionary, NSString;
@protocol MSSubscribeStorageProtocol, MSSubscribeStorageProtocolDelegate;


#import "MSMMCSProtocol.h"

@interface MSSubscribeMMCSProtocol : MSMMCSProtocol <MSSubscribeStorageProtocol>

 {
    NSUInteger _itemCount;
    NSMutableDictionary *_itemIDToAssetDict;
    *NSUInteger _itemIDs;
    *char * _signatures;
    *char * _authTokens;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<MSSubscribeStorageProtocolDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPersonID:(id)arg0 ;
-(void)_getItemDone:(NSUInteger)arg0 path:(id)arg1 error:(id)arg2 ;
-(void)_requestCompleted;
-(void)_tellDelegateProtocolDidFinishRetrievingAssetParams:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)retrieveAssets:(id)arg0 ;


@end


#endif