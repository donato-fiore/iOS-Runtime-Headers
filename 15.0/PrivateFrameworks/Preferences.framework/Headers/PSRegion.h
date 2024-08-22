// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSREGION_H
#define PSREGION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PSRegion : NSObject

@property (retain, nonatomic) NSString *regionCode; // ivar: _regionCode
@property (retain, nonatomic) NSString *regionName; // ivar: _regionName


+(id)regionWithName:(id)arg0 code:(id)arg1 ;


@end


#endif