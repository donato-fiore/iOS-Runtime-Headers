// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMSTATEDATA_H
#define HMMSTATEDATA_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface HMMStateData : NSObject

@property (readonly, nonatomic) BOOL cleanClose; // ivar: _cleanClose
@property (readonly, nonatomic) NSUInteger duration; // ivar: _duration
@property (readonly, nonatomic) NSDictionary *enterData; // ivar: _enterData
@property (nonatomic) NSUInteger enterTime; // ivar: _enterTime
@property (readonly, nonatomic) NSDictionary *exitData; // ivar: _exitData
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isOpen) BOOL open; // ivar: _open


-(id)description;
-(id)initWithName:(id)arg0 enterTime:(NSUInteger)arg1 enterData:(id)arg2 ;
-(void)_exitTime:(NSUInteger)arg0 exitData:(id)arg1 ;
-(void)exitTime:(NSUInteger)arg0 exitData:(id)arg1 ;
-(void)forceExit:(NSUInteger)arg0 ;


@end


#endif