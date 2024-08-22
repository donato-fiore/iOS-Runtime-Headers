// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPPLAYBACKSTATE_H
#define TVPPLAYBACKSTATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TVPPlaybackState : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name


+(id)loading;
+(id)paused;
+(id)playing;
+(id)scanning;
+(id)stopped;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 ;


@end


#endif