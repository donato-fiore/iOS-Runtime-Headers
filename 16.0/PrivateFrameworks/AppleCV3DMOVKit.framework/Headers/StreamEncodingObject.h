// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STREAMENCODINGOBJECT_H
#define STREAMENCODINGOBJECT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface StreamEncodingObject : NSObject

@property (nonatomic) float bitrate; // ivar: _bitrate
@property (nonatomic) float expectedFPS; // ivar: _expectedFPS
@property (retain, nonatomic) NSDictionary *extraConfigs; // ivar: _extraConfigs
@property (nonatomic) BOOL forceH264; // ivar: _forceH264
@property (nonatomic) BOOL lossless; // ivar: _lossless


-(id)init;
-(id)initWithLossless:(BOOL)arg0 bitrate:(float)arg1 forceH264:(BOOL)arg2 expectedFPS:(float)arg3 extraConfigs:(id)arg4 ;


@end


#endif