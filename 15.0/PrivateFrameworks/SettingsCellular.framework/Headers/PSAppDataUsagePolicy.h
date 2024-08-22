// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSAPPDATAUSAGEPOLICY_H
#define PSAPPDATAUSAGEPOLICY_H


#import <Foundation/Foundation.h>


@interface PSAppDataUsagePolicy : NSObject

@property (nonatomic) BOOL cellularDataEnabled; // ivar: _cellularDataEnabled
@property (nonatomic) BOOL isManaged; // ivar: _isManaged
@property (nonatomic) BOOL modificationAllowed; // ivar: _modificationAllowed
@property (nonatomic) BOOL wifiDataEnabled; // ivar: _wifiDataEnabled


-(id)init;


@end


#endif