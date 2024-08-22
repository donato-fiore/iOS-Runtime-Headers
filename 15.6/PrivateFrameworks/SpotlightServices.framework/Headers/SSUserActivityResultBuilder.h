// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSUSERACTIVITYRESULTBUILDER_H
#define SSUSERACTIVITYRESULTBUILDER_H

@class NSString;


#import "SSResultBuilder.h"

@interface SSUserActivityResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (retain, nonatomic) NSString *userActivityName; // ivar: _userActivityName
@property (retain, nonatomic) NSString *userActivityRequiredString; // ivar: _userActivityRequiredString


+(BOOL)supportsResult:(id)arg0 ;
-(id)buildThumbnail;
-(id)initWithResult:(id)arg0 ;


@end


#endif