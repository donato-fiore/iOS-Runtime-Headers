// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHSERVERRESPONSECONTEXT_H
#define SHSERVERRESPONSECONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SHServerResponseContext : NSObject

@property (copy, nonatomic) NSString *campaignToken; // ivar: _campaignToken
@property (nonatomic) CGFloat defaultRecordingIntermissionInSeconds; // ivar: _defaultRecordingIntermissionInSeconds


-(void)sh_setDefaultValuesWithCompletion:(id)arg0 ;


@end


#endif