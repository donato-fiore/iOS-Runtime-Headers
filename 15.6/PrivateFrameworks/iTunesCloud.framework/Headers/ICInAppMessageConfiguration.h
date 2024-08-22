// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICINAPPMESSAGECONFIGURATION_H
#define ICINAPPMESSAGECONFIGURATION_H

@class NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface ICInAppMessageConfiguration : NSObject {
    NSDictionary *_dictionary;
}


@property (readonly, nonatomic) NSURL *reportEventURL;
@property (readonly, nonatomic) NSURL *resourceDomainURL;
@property (readonly, nonatomic) NSURL *serialCheckURL;
@property (readonly, nonatomic) NSInteger syncPollingInterval;
@property (readonly, nonatomic) NSURL *syncURL;


-(id)initWithDictionary:(id)arg0 ;


@end


#endif