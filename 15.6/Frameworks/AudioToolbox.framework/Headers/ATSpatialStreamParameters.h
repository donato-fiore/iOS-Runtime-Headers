// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATSPATIALSTREAMPARAMETERS_H
#define ATSPATIALSTREAMPARAMETERS_H

@class AVAudioFormat, NSUUID;

#import <Foundation/Foundation.h>


@interface ATSpatialStreamParameters : NSObject

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) AVAudioFormat *format; // ivar: _format
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier


-(BOOL)enableStreamWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initInternalWithFormat:(id)arg0 ;
-(void)disableStream;


@end


#endif