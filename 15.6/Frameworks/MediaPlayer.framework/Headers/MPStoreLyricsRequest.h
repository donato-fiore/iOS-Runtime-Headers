// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTORELYRICSREQUEST_H
#define MPSTORELYRICSREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPModelSong.h"

@interface MPStoreLyricsRequest : NSObject <NSCopying>



@property (retain, nonatomic) MPModelSong *song; // ivar: _song


+(BOOL)supportsLyricsForURLBag:(id)arg0 ;
+(BOOL)supportsLyricsForURLBagDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif