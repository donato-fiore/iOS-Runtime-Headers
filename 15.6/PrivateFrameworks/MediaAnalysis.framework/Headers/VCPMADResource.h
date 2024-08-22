// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPMADRESOURCE_H
#define VCPMADRESOURCE_H


#import <Foundation/Foundation.h>


@interface VCPMADResource : NSObject

@property (readonly, nonatomic) CGFloat activeCost;
@property (readonly, nonatomic) CGFloat inactiveCost;


-(id)description;
-(void)purge;


@end


#endif