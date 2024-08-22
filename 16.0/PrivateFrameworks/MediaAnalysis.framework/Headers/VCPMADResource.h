// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPMADRESOURCE_H
#define VCPMADRESOURCE_H


#import <Foundation/Foundation.h>


@interface VCPMADResource : NSObject

@property (readonly, nonatomic) NSInteger activeCost;
@property (readonly, nonatomic) NSInteger inactiveCost;


-(id)description;
-(void)purge;


@end


#endif