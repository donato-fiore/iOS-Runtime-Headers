// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XBLAUNCHCAPTUREINFORMATION_H
#define XBLAUNCHCAPTUREINFORMATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface XBLaunchCaptureInformation : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *caarFilePath; // ivar: _caarFilePath
@property (nonatomic) NSUInteger estimatedMemoryImpact; // ivar: _estimatedMemoryImpact


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif