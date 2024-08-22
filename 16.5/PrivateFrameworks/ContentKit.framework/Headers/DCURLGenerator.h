// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DCURLGENERATOR_H
#define DCURLGENERATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DCURLGenerator : NSObject

@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *query;
@property (readonly, nonatomic) NSString *scheme;


-(id)URL;


@end


#endif