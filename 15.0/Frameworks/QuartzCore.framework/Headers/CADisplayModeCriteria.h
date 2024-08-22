// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADISPLAYMODECRITERIA_H
#define CADISPLAYMODECRITERIA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CADisplayModeCriteria : NSObject {
    *CADisplayModeCriteriaPriv _priv;
}


@property (copy) NSString *hdrMode;
@property CGFloat refreshRate;
@property CGSize resolution;


-(id)init;
-(void)dealloc;


@end


#endif