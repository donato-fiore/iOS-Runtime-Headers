// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BDSAPPGROUPCONTAINER_H
#define BDSAPPGROUPCONTAINER_H


#import <Foundation/Foundation.h>


@interface BDSAppGroupContainer : NSObject



+(BOOL)isUnitTesting;
+(id)containerIdentifier;
+(id)containerURL;
+(id)documentsURL;
+(void)setUnitTesting:(BOOL)arg0 ;


@end


#endif