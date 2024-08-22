// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUIACTIVITYIMAGEREQUEST_H
#define SFUIACTIVITYIMAGEREQUEST_H

@class UIActivity, NSString, UIImageSymbolConfiguration;


#import "SFUIImageRequest.h"

@interface SFUIActivityImageRequest : SFUIImageRequest

@property (readonly, nonatomic) UIActivity *activity; // ivar: _activity
@property (readonly, nonatomic) NSInteger activityCategory; // ivar: _activityCategory
@property (readonly, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // ivar: _imageSymbolConfiguration


-(id)initWithRequestID:(int)arg0 activity:(id)arg1 contentSizeCategory:(id)arg2 imageSymbolConfiguration:(id)arg3 synchronous:(BOOL)arg4 resultHandler:(id)arg5 ;
-(id)initWithRequestID:(int)arg0 identifier:(id)arg1 activityCategory:(NSInteger)arg2 contentSizeCategory:(id)arg3 synchronous:(BOOL)arg4 resultHandler:(id)arg5 ;


@end


#endif