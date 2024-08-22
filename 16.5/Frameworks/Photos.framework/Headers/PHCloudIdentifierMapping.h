// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHCLOUDIDENTIFIERMAPPING_H
#define PHCLOUDIDENTIFIERMAPPING_H

@class NSError;

#import <Foundation/Foundation.h>

#import "PHCloudIdentifier.h"

@interface PHCloudIdentifierMapping : NSObject

@property (readonly, nonatomic) PHCloudIdentifier *cloudIdentifier; // ivar: _cloudIdentifier
@property (readonly, nonatomic) NSError *error; // ivar: _error


-(id)initWithCloudIdentifier:(id)arg0 error:(id)arg1 ;


@end


#endif