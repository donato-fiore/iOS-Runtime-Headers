// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTCAPTUREOBJECTS_H
#define GTCAPTUREOBJECTS_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GTCaptureObjects : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *captureScopes; // ivar: _captureScopes
@property (copy, nonatomic) NSArray *commandQueues; // ivar: _commandQueues
@property (copy, nonatomic) NSArray *devices; // ivar: _devices
@property (copy, nonatomic) NSArray *metalLayers; // ivar: _metalLayers


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif