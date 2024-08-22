// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSMARTSIRIVOLUMEESTIMATE_H
#define CSSMARTSIRIVOLUMEESTIMATE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CSSmartSiriVolumeEstimate : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *debugLogPath; // ivar: _debugLogPath
@property (readonly, nonatomic) float volumeEstimate; // ivar: _volumeEstimate


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVolumeEstimate:(float)arg0 debugLogFile:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif