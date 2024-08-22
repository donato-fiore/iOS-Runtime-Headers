// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPKCONTENT_H
#define TPKCONTENT_H

@class NSString, TPSMonitoringEvents, NSError, TPSDiscoverabilityTip, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TPKContent : NSObject <NSCopying, NSSecureCoding>

 {
    ? cachedViewModel;
    ? identifier;
    ? userInfo;
}


@property (nonatomic) NSInteger customizationID; // ivar: customizationID
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) NSInteger displayCount; // ivar: displayCount
@property (nonatomic, readonly) BOOL hasTipContent;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) BOOL isLocalContent;
@property (nonatomic, retain) TPSMonitoringEvents *monitoringEvents; // ivar: monitoringEvents
@property (nonatomic, readonly) NSError *parsingError;
@property (nonatomic) NSInteger state; // ivar: state
@property (nonatomic, retain) TPSDiscoverabilityTip *tip; // ivar: tip
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic) NSInteger version; // ivar: version


+(BOOL)supportsSecureCoding;
+(id)emptyContent;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)monitoringEventOptionsForCurrentState;
-(NSUInteger)monitoringEventOptionsMatchedWithRegistrableEventIdentifier:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCopy:(id)arg0 ;
-(id)initWithDiscoverabilityTip:(id)arg0 monitoringEvents:(id)arg1 customizationID:(NSInteger)arg2 userInfo:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 monitoringEvents:(id)arg1 customizationID:(NSInteger)arg2 userInfo:(id)arg3 ;
-(void)createCachedViewModelUsingViewDelegate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementDisplaycount;
-(void)updateDisplayCount:(NSInteger)arg0 ;
-(void)updateState:(NSInteger)arg0 ;


@end


#endif