// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRANSPARENCYTRANSCRIPT_H
#define TRANSPARENCYTRANSCRIPT_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface TransparencyTranscript : NSObject

@property (retain) NSMutableArray *_events; // ivar: __events
@property (retain) NSString *context; // ivar: _context


-(id)initWithContext:(id)arg0 ;
-(id)serialize;
-(void)addEvent:(id)arg0 ;
-(void)startEvent:(id)arg0 ;
-(void)stopEventWithFailure:(id)arg0 error:(id)arg1 ;
-(void)stopEventWithSuccess:(id)arg0 ;


@end


#endif