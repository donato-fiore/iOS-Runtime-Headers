// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSPARENCYTRANSCRIPTEVENT_H
#define TRANSPARENCYTRANSCRIPTEVENT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface TransparencyTranscriptEvent : NSObject

@property (retain) NSString *name; // ivar: _name
@property BOOL success; // ivar: _success
@property (retain) NSDate *timestamp; // ivar: _timestamp


-(id)initWithName:(id)arg0 ;
-(id)serialize;


@end


#endif