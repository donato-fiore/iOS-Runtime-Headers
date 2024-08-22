// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADLOGMANAGERHANDLER_H
#define ADLOGMANAGERHANDLER_H


#import <Foundation/Foundation.h>


@interface ADLogManagerHandler : NSObject

@property (nonatomic) BOOL active; // ivar: _active
@property (nonatomic) BOOL humanReadableFormat; // ivar: _humanReadableFormat


-(NSInteger)setHostName:(id)arg0 ;
-(NSInteger)setLogFolder:(id)arg0 ;
-(id)name;
-(void)logCalibration:(id)arg0 name:(char *)arg1 timestamp:(CGFloat)arg2 ;
-(void)logDictionary:(id)arg0 name:(char *)arg1 timestamp:(CGFloat)arg2 ;
-(void)logMatrix4x4:(struct ? )arg0 name:(char *)arg1 timestamp:(CGFloat)arg2 ;
-(void)logPixelBuffer:(struct __CVBuffer *)arg0 name:(char *)arg1 timestamp:(CGFloat)arg2 ;
-(void)logPointCloud:(id)arg0 name:(char *)arg1 timestamp:(CGFloat)arg2 ;
-(void)logRawBuffer:(*void)arg0 size:(NSUInteger)arg1 name:(char *)arg2 timestamp:(CGFloat)arg3 ;
-(void)logString:(id)arg0 name:(char *)arg1 timestamp:(CGFloat)arg2 ;
-(void)postDisable;
-(void)preEnable;


@end


#endif