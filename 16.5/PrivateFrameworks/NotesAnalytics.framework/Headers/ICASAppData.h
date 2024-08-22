// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASAPPDATA_H
#define ICASAPPDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASAppData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *appBuild; // ivar: _appBuild
@property (readonly, nonatomic) NSString *appVersion; // ivar: _appVersion


+(id)dataName;
-(id)initWithAppVersion:(id)arg0 appBuild:(id)arg1 ;
-(id)toDict;


@end


#endif