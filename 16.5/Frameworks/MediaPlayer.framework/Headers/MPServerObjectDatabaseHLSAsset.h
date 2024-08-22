// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSERVEROBJECTDATABASEHLSASSET_H
#define MPSERVEROBJECTDATABASEHLSASSET_H

@class NSString, NSURL, NSNumber;

#import <Foundation/Foundation.h>


@interface MPServerObjectDatabaseHLSAsset : NSObject

@property (readonly, copy, nonatomic) NSString *hashedPersonID; // ivar: _hashedPersonID
@property (readonly, nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream; // ivar: _iTunesStoreStream
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSURL *keyCertificateURL; // ivar: _keyCertificateURL
@property (readonly, copy, nonatomic) NSNumber *keyServerAdamID; // ivar: _keyServerAdamID
@property (readonly, copy, nonatomic) NSString *keyServerProtocolType; // ivar: _keyServerProtocolType
@property (readonly, copy, nonatomic) NSURL *keyServerURL; // ivar: _keyServerURL
@property (readonly, copy, nonatomic) NSURL *playlistURL; // ivar: _playlistURL


-(id)_initWithIdentifier:(id)arg0 hashedPersonID:(id)arg1 playlistURL:(id)arg2 keyCertificateURL:(id)arg3 keyServerURL:(id)arg4 keyServerAdamID:(id)arg5 keyServerProtocolType:(id)arg6 isiTunesStoreStream:(BOOL)arg7 ;
-(id)initWithSQLRowResult:(id)arg0 ;


@end


#endif