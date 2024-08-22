// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCONTENTTASTEPENDINGUPDATERECORD_H
#define MPCONTENTTASTEPENDINGUPDATERECORD_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface MPContentTastePendingUpdateRecord : NSObject

@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) NSString *playlistGlobalID; // ivar: _playlistGlobalID
@property (readonly, nonatomic) NSInteger storeAdamID; // ivar: _storeAdamID
@property (readonly, nonatomic) NSInteger tasteType; // ivar: _tasteType
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithPlaylistGlobalID:(id)arg0 tasteType:(NSInteger)arg1 ;
-(id)initWithStoreAdamID:(NSInteger)arg0 tasteType:(NSInteger)arg1 ;
-(void)_initializeWithType:(NSInteger)arg0 tasteType:(NSInteger)arg1 ;


@end


#endif