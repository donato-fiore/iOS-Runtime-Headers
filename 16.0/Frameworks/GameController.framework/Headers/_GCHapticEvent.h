// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCHAPTICEVENT_H
#define _GCHAPTICEVENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _GCHapticEvent : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger identifier; // ivar: _identifier
@property (nonatomic) CGFloat intensity; // ivar: _intensity
@property (nonatomic) CGFloat sharpness; // ivar: _sharpness
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) BOOL stopped; // ivar: _stopped
@property (nonatomic) BOOL transientBeganAsContinuousEvent; // ivar: _transientBeganAsContinuousEvent
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSyntheticCommand:(id)arg0 ;
-(struct pair<bool, float> )valueForNoteParam:(unsigned int)arg0 inParameters:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluateDeviceNoteParams:(id)arg0 ;


@end


#endif