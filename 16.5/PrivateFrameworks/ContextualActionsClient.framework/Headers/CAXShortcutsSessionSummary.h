// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAXSHORTCUTSSESSIONSUMMARY_H
#define CAXSHORTCUTSSESSIONSUMMARY_H

@class NSArray, NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CAXShortcutsSessionSummary : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy, nonatomic) NSUUID *blendingCacheUpdateUUID; // ivar: _blendingCacheUpdateUUID
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)initWithActions:(id)arg0 sessionIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif