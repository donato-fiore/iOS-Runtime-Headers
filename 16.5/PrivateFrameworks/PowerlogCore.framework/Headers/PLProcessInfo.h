// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPROCESSINFO_H
#define PLPROCESSINFO_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface PLProcessInfo : NSObject

@property int pid; // ivar: _pid
@property (retain) NSString *processName; // ivar: _processName
@property (retain) NSDictionary *threadNameToInfo; // ivar: _threadNameToInfo
@property CGFloat totalSystemTime; // ivar: _totalSystemTime
@property CGFloat totalUserTime; // ivar: _totalUserTime


-(BOOL)isEqualToProcessInfo:(id)arg0 ;
-(id)description;
-(id)diffSinceBaseline:(id)arg0 ;
-(id)initWithName:(id)arg0 andID:(int)arg1 ;
-(id)initWithProcessInfo:(id)arg0 ;
-(void)populateCPUTime;


@end


#endif