// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCPEVENTSTREAM_H
#define RCPEVENTSTREAM_H

@class NSArray, NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "RCPEventEnvironment.h"

@interface RCPEventStream : NSObject <NSCopying>



@property (retain, nonatomic) RCPEventEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSMutableArray *rawEvents; // ivar: _rawEvents


+(id)eventStreamWithData:(id)arg0 error:(*id)arg1 ;
+(id)eventStreamWithFileURL:(id)arg0 error:(*id)arg1 ;
+(id)eventStreamWithStudyLogFileURL:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)emptyCopy;
-(id)init;
-(id)statistics;
-(id)streamByAddingEventsFromStream:(id)arg0 withDistance:(CGFloat)arg1 ;
-(id)timingStatistics;
-(id)trimmedFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)_addEvent:(id)arg0 ;
-(void)enumerateEventsUsingBlock:(id)arg0 ;
-(void)filterEventsUsingBlock:(id)arg0 ;
-(void)transformDigitizerEventLocationsWithTransform:(struct CGAffineTransform )arg0 ;
-(void)writeToURL:(id)arg0 ;


@end


#endif