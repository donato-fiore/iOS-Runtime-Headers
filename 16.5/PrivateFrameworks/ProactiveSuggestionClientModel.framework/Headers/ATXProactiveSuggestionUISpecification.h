// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPROACTIVESUGGESTIONUISPECIFICATION_H
#define ATXPROACTIVESUGGESTIONUISPECIFICATION_H

@class NSArray, NSString;
@protocol NSSecureCoding, ATXProtoBufWrapper, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionUISpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>



@property (readonly, nonatomic) BOOL allowedOnHomeScreen; // ivar: _allowedOnHomeScreen
@property (readonly, nonatomic) BOOL allowedOnLockscreen; // ivar: _allowedOnLockscreen
@property (readonly, nonatomic) BOOL allowedOnSpotlight; // ivar: _allowedOnSpotlight
@property (readonly, nonatomic) NSUInteger predictionReasons; // ivar: _predictionReasons
@property (readonly, nonatomic) NSArray *preferredLayoutConfigs; // ivar: _preferredLayoutConfigs
@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) BOOL shouldClearOnEngagement; // ivar: _shouldClearOnEngagement
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)fuzzyIsEqualToUISpecification:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 predictionReason:(id)arg2 preferredLayoutConfigs:(id)arg3 allowedOnLockscreen:(BOOL)arg4 allowedOnHomeScreen:(BOOL)arg5 allowedOnSpotlight:(BOOL)arg6 shouldClearOnEngagement:(BOOL)arg7 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 predictionReason:(id)arg2 preferredLayoutConfigs:(id)arg3 allowedOnLockscreen:(BOOL)arg4 allowedOnHomeScreen:(BOOL)arg5 allowedOnSpotlight:(BOOL)arg6 shouldClearOnEngagement:(BOOL)arg7 predictionReasons:(NSUInteger)arg8 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 preferredLayoutConfigs:(id)arg2 allowedOnLockscreen:(BOOL)arg3 allowedOnHomeScreen:(BOOL)arg4 allowedOnSpotlight:(BOOL)arg5 ;
-(id)jsonRawData;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif