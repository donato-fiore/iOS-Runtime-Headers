// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCVIDEORULE_H
#define VCVIDEORULE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VCVideoRule : NSObject

@property (readonly, nonatomic) NSString *description;
@property (nonatomic) float fPref; // ivar: _priority
@property (readonly, nonatomic) float fRate; // ivar: _frameRate
@property (readonly, nonatomic) int iHeight; // ivar: _height
@property (readonly, nonatomic) int iPayload; // ivar: _payload
@property (readonly, nonatomic) int iWidth; // ivar: _width


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isVideoFullHD;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compareByPref:(id)arg0 ;
-(id)initWithFrameWidth:(int)arg0 frameHeight:(int)arg1 frameRate:(float)arg2 ;
-(id)initWithFrameWidth:(int)arg0 frameHeight:(int)arg1 frameRate:(float)arg2 payload:(int)arg3 ;
-(id)initWithFrameWidth:(int)arg0 frameHeight:(int)arg1 frameRate:(float)arg2 payload:(int)arg3 priority:(float)arg4 ;
-(void)setFrameWidth:(int)arg0 frameHeight:(int)arg1 frameRate:(float)arg2 ;
-(void)setToVideoRule:(id)arg0 ;


@end


#endif