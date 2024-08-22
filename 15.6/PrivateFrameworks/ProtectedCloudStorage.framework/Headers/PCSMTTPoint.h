// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCSMTTPOINT_H
#define PCSMTTPOINT_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PCSMTT.h"

@interface PCSMTTPoint : NSObject <NSSecureCoding>



@property (weak) PCSMTT *mtt; // ivar: _mtt
@property (retain) NSString *name; // ivar: _name
@property (retain) NSDate *start; // ivar: _start
@property (readonly) BOOL success; // ivar: _success
@property (readonly) CGFloat time; // ivar: _time


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMTT:(id)arg0 name:(id)arg1 ;
-(id)jsonDict;
-(void)complete:(BOOL)arg0 ;
-(void)complete:(BOOL)arg0 time:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif