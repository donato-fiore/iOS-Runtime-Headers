// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCLIENTGETDEVICEASSETSRESULTS_H
#define SFCLIENTGETDEVICEASSETSRESULTS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFClientGetDeviceAssetsResults : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *assetBundlePath; // ivar: _assetBundlePath


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif