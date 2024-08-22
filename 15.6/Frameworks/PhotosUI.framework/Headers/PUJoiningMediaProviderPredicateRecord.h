// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUJOININGMEDIAPROVIDERPREDICATERECORD_H
#define PUJOININGMEDIAPROVIDERPREDICATERECORD_H


#import <Foundation/Foundation.h>

#import "PUMediaProvider.h"

@interface PUJoiningMediaProviderPredicateRecord : NSObject

@property (readonly, nonatomic) PUMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, copy, nonatomic) id *predicate; // ivar: _predicate


-(id)initWithMediaProvider:(id)arg0 predicate:(id)arg1 ;


@end


#endif