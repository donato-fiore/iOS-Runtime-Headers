// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDMOMENTSHAREINGESTIONCONTEXT_H
#define IMDMOMENTSHAREINGESTIONCONTEXT_H

@class NSMutableDictionary, NSDictionary, PHFetchResult, IMMessageItem, PHMomentShare, NSURL;

#import <Foundation/Foundation.h>

#import "IMDChat.h"

@interface IMDMomentShareIngestionContext : NSObject {
    NSMutableDictionary *_assetUUIDsToFileTransfers;
}


@property (readonly, nonatomic) NSDictionary *assetUUIDsToFileTransfers;
@property (retain, nonatomic) PHFetchResult *assetsFetch; // ivar: _assetsFetch
@property (readonly, nonatomic) IMDChat *chat; // ivar: _chat
@property (nonatomic) NSInteger fetchType; // ivar: _fetchType
@property (readonly, nonatomic) IMMessageItem *message; // ivar: _message
@property (retain, nonatomic) PHMomentShare *momentShare; // ivar: _momentShare
@property (readonly, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (nonatomic) NSInteger state; // ivar: _state


-(id)initWithURL:(id)arg0 message:(id)arg1 inChat:(id)arg2 ;
-(void)addTransfers:(id)arg0 ;
-(void)clearAllTransfers;
-(void)completeTransferForAssetUUID:(id)arg0 ;


@end


#endif