// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSSESSIONCONTEXTMODEL_H
#define CMSSESSIONCONTEXTMODEL_H

@class NSString, NSURL, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CMSSessionContextModel : NSObject <NSSecureCoding>



@property (nonatomic) BOOL homeKitAllowExplicitContentSetting; // ivar: _homeKitAllowExplicitContentSetting
@property (nonatomic) BOOL homeKitUpdateListeningHistorySetting; // ivar: _homeKitUpdateListeningHistorySetting
@property (copy, nonatomic) NSString *homeUserID; // ivar: _homeUserID
@property (copy, nonatomic) NSString *serverEnvironmentOverride; // ivar: _serverEnvironmentOverride
@property (copy, nonatomic) NSURL *serverOverrideURL; // ivar: _serverOverrideURL
@property (copy, nonatomic) NSString *serviceID; // ivar: _serviceID
@property (nonatomic) BOOL serviceUpdateListeningHistory; // ivar: _serviceUpdateListeningHistory
@property (retain, nonatomic) NSDictionary *serviceUpdateListeningHistoryAllUsers; // ivar: _serviceUpdateListeningHistoryAllUsers
@property (copy, nonatomic) NSString *sessionAuthHeaderOverride; // ivar: _sessionAuthHeaderOverride


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif