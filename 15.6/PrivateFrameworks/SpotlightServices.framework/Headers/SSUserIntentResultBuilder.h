// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSUSERINTENTRESULTBUILDER_H
#define SSUSERINTENTRESULTBUILDER_H

@class NSString, NSDate;


#import "SSResultBuilder.h"

@interface SSUserIntentResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (retain, nonatomic) NSString *intentName; // ivar: _intentName
@property (nonatomic) BOOL isBackgroundRunnable; // ivar: _isBackgroundRunnable
@property (retain, nonatomic) NSString *punchoutLabel; // ivar: _punchoutLabel
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSString *userActivityRequiredString; // ivar: _userActivityRequiredString


+(BOOL)supportsResult:(id)arg0 ;
-(id)buildDescriptions;
-(id)buildResult;
-(id)buildThumbnail;
-(id)initWithResult:(id)arg0 ;


@end


#endif