// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef S3ACCESSCONFIG_H
#define S3ACCESSCONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface S3AccessConfig : NSObject

@property (retain, nonatomic) NSString *AWSAccessKeyID; // ivar: _AWSAccessKeyID
@property (retain, nonatomic) NSString *AWSSecretAccessKey; // ivar: _AWSSecretAccessKey


-(id)initWithAWSAccessKeyID:(id)arg0 AWSSecretAccessKey:(id)arg1 ;


@end


#endif