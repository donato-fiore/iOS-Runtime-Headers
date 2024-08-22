// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMUSICRESTOREBAGCONFIGURATION_H
#define ICMUSICRESTOREBAGCONFIGURATION_H

@class NSArray, NSURL;

#import <Foundation/Foundation.h>


@interface ICMusicRestoreBagConfiguration : NSObject

@property (readonly, copy, nonatomic) NSArray *allowedKinds; // ivar: _allowedKinds
@property (readonly, copy, nonatomic) NSArray *allowedMatchStatus; // ivar: _allowedMatchStatus
@property (readonly, copy, nonatomic) NSURL *restoreURL; // ivar: _restoreURL
@property (readonly, nonatomic) BOOL shouldGZip; // ivar: _shouldGZip


-(id)initWithServerConfiguration:(id)arg0 ;


@end


#endif