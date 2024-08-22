// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTOCOMPLETESTOREREPROSTRINGRECORDER_H
#define CNAUTOCOMPLETESTOREREPROSTRINGRECORDER_H

@class NSString, NSNumber, NSMutableString;
@protocol CNTimeProvider;

#import <Foundation/Foundation.h>


@interface CNAutocompleteStoreReproStringRecorder : NSObject

@property (copy) NSString *lastString; // ivar: _lastString
@property (copy) NSNumber *lastTimestamp; // ivar: _lastTimestamp
@property (readonly, copy, nonatomic) NSString *reproString;
@property (readonly) NSMutableString *reproStringStorage; // ivar: _reproStringStorage
@property (readonly) NSObject<CNTimeProvider> *timeProvider; // ivar: _timeProvider


-(id)description;
-(id)init;
-(id)initWithTimeProvider:(id)arg0 ;
-(id)stringForIntervalSinceLastTimestamp:(CGFloat)arg0 ;
-(id)stringForKeystrokesSinceLastString:(id)arg0 ;
-(void)clear;
-(void)recordString:(id)arg0 ;


@end


#endif