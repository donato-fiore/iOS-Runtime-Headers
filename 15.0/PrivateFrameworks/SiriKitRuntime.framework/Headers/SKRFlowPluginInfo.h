// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKRFLOWPLUGININFO_H
#define SKRFLOWPLUGININFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKRFlowPluginInfo : NSObject <NSSecureCoding>

 {
    ? supportsOnDeviceNL;
}


@property (nonatomic, readonly) NSString *description;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif