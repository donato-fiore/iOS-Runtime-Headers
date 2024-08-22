// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPMEDIAPLAYERRESPONSE_H
#define PPMEDIAPLAYERRESPONSE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface PPMediaPlayerResponse : NSObject

@property (retain, nonatomic) NSString *album; // ivar: _album
@property (retain, nonatomic) NSString *artist; // ivar: _artist
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSString *playerID; // ivar: _playerID
@property (nonatomic) unsigned int state; // ivar: _state
@property (retain, nonatomic) NSNumber *storeItemID; // ivar: _storeItemID
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqualToResponse:(id)arg0 ;


@end


#endif