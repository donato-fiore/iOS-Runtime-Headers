// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMUFAIRPLAYREMOTESERVERPLAYBACKCONTEXT_H
#define SMUFAIRPLAYREMOTESERVERPLAYBACKCONTEXT_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SMUFairPlayRemoteServerPlaybackContext : NSObject

@property (readonly, copy, nonatomic) NSData *blob; // ivar: _blob
@property (readonly, nonatomic) unsigned int identifier; // ivar: _identifier


-(id)initWithBlob:(id)arg0 identifier:(unsigned int)arg1 ;


@end


#endif