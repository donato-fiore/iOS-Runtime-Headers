// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSTOUCHAUTHENTICATIONSPECIFICATION_H
#define BKSTOUCHAUTHENTICATIONSPECIFICATION_H

@class NSString, NSSet;
@protocol NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionStreamable, BSProtobufSerializable;

#import <Foundation/Foundation.h>


@interface BKSTouchAuthenticationSpecification : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionStreamable, BSProtobufSerializable>

 {
    unsigned short _backgroundStatisticsTopEdgeInset;
    unsigned short _backgroundStatisticsLeftEdgeInset;
    unsigned short _backgroundStatisticsBottomEdgeInset;
    unsigned short _backgroundStatisticsRightEdgeInset;
}


@property (readonly, nonatomic) NSUInteger authenticationMessageContext; // ivar: _authenticationMessageContext
@property (readonly, nonatomic) float backgroundStatisticsFailingContrast; // ivar: _backgroundStatisticsFailingContrast
@property (readonly, nonatomic) float backgroundStatisticsForeground; // ivar: _backgroundStatisticsForeground
@property (readonly, nonatomic) float backgroundStatisticsPassingContrast; // ivar: _backgroundStatisticsPassingContrast
@property (readonly, nonatomic) ? backgroundStatisticsRegion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *displays; // ivar: _displays
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger hitTestInformationMask; // ivar: _hitTestInformationMask
@property (readonly, nonatomic) unsigned int secureName; // ivar: _secureName
@property (readonly, nonatomic) unsigned int slotID; // ivar: _slotID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)buildSpecification:(id)arg0 ;
+(id)new;
+(id)protobufSchema;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initForProtobufDecoding;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif