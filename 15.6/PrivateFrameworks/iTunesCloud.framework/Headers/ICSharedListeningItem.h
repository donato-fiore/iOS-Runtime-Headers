// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSHAREDLISTENINGITEM_H
#define ICSHAREDLISTENINGITEM_H

@class NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICLiveLinkIdentity.h"

@interface ICSharedListeningItem : NSObject <NSCopying>



@property (readonly, copy, nonatomic) ICLiveLinkIdentity *contributorIdentity; // ivar: _contributorIdentity
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *mediaIdentifier; // ivar: _mediaIdentifier
@property (readonly, copy, nonatomic) NSDictionary *playParams; // ivar: _playParams


+(id)itemWithMediaIdentifier:(id)arg0 ;
-(id)_playParamsForPlaybackItemProto:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProtobuf:(id)arg0 identity:(id)arg1 ;


@end


#endif