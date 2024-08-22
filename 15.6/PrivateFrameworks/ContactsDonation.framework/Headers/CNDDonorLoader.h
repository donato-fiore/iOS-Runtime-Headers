// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNDDONORLOADER_H
#define CNDDONORLOADER_H

@protocol CNDonationLoggerProvider;

#import <Foundation/Foundation.h>


@interface CNDDonorLoader : NSObject

@property (readonly, nonatomic) NSObject<CNDonationLoggerProvider> *loggerProvider; // ivar: _loggerProvider


+(id)continuousExtensionsObservable;
+(id)currentExtensionsObservable;
+(id)extensionAttributes;
-(id)donorWithIdentifier:(id)arg0 ;
-(id)init;


@end


#endif