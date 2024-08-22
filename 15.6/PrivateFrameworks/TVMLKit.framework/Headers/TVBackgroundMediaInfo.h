// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVBACKGROUNDMEDIAINFO_H
#define TVBACKGROUNDMEDIAINFO_H

@class IKAppPlayerBridge;


#import "TVMediaInfo.h"

@interface TVBackgroundMediaInfo : TVMediaInfo

@property (retain, nonatomic) IKAppPlayerBridge *playerBridge; // ivar: _playerBridge


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif