// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORIESBLACKLISTPLACELOCATIONACCESSORYVIEWSPEC_H
#define PXMEMORIESBLACKLISTPLACELOCATIONACCESSORYVIEWSPEC_H

@class CLLocation;


#import "PXMemoriesBlacklistAccessoryViewSpec.h"

@interface PXMemoriesBlacklistPlaceLocationAccessoryViewSpec : PXMemoriesBlacklistAccessoryViewSpec

@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) CGFloat regionRadius; // ivar: _regionRadius


+(id)specWithLocation:(id)arg0 regionRadius:(CGFloat)arg1 ;
-(id)initWithLocation:(id)arg0 regionRadius:(CGFloat)arg1 ;


@end


#endif