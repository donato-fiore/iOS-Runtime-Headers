// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HSNOWPLAYINGARTWORKREQUEST_H
#define HSNOWPLAYINGARTWORKREQUEST_H



#import "HSRequest.h"

@interface HSNowPlayingArtworkRequest : HSRequest

@property (readonly, nonatomic) unsigned int interfaceID; // ivar: _interfaceID
@property (readonly, nonatomic) CGSize maximumSize; // ivar: _maximumSize
@property (readonly, nonatomic) unsigned int playQueueIndex; // ivar: _playQueueIndex


-(id)canonicalResponseForResponse:(id)arg0 ;
-(id)initWithInterfaceID:(unsigned int)arg0 maximumSize:(struct CGSize )arg1 playQueueIndex:(unsigned int)arg2 ;


@end


#endif