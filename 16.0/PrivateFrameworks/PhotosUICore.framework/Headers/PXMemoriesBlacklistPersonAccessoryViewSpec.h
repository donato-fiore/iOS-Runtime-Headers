// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMEMORIESBLACKLISTPERSONACCESSORYVIEWSPEC_H
#define PXMEMORIESBLACKLISTPERSONACCESSORYVIEWSPEC_H

@protocol PXPerson;


#import "PXMemoriesBlacklistAccessoryViewSpec.h"

@interface PXMemoriesBlacklistPersonAccessoryViewSpec : PXMemoriesBlacklistAccessoryViewSpec

@property (readonly, nonatomic) NSObject<PXPerson> *person; // ivar: _person


+(id)specWithPerson:(id)arg0 ;
-(id)initWithPerson:(id)arg0 ;


@end


#endif