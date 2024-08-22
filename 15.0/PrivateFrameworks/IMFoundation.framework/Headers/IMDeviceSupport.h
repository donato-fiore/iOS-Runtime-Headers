// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDEVICESUPPORT_H
#define IMDEVICESUPPORT_H

@class NSString, NSRecursiveLock;

#import <Foundation/Foundation.h>


@interface IMDeviceSupport : NSObject {
    NSString *_model;
    NSString *_productName;
    NSString *_productVersion;
    NSString *_buildVersion;
    NSRecursiveLock *_lock;
}


@property (readonly, nonatomic) NSString *deviceInformationString;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) NSString *userAgentString;


+(id)marketingNameForModel:(id)arg0 ;
+(id)sharedInstance;
-(id)init;
-(void)_generateProductInformation;


@end


#endif