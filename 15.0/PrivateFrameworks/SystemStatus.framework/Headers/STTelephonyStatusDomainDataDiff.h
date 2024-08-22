// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STTELEPHONYSTATUSDOMAINDATADIFF_H
#define STTELEPHONYSTATUSDOMAINDATADIFF_H

@class BSSettings, NSString;
@protocol STStatusDomainDataDiff;

#import <Foundation/Foundation.h>

#import "STTelephonyStatusDomainSIMInfoDiff.h"

@interface STTelephonyStatusDomainDataDiff : NSObject <STStatusDomainDataDiff>



@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfoDiff *SIMOneInfoDiff; // ivar: _SIMOneInfoDiff
@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfoDiff *SIMTwoInfoDiff; // ivar: _SIMTwoInfoDiff
@property (readonly, copy, nonatomic) BSSettings *changes; // ivar: _changes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)diffFromData:(id)arg0 toData:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)dataByApplyingToData:(id)arg0 ;
-(id)diffByApplyingDiff:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSIMOneInfoDiff:(id)arg0 SIMTwoInfoDiff:(id)arg1 changes:(id)arg2 ;
-(void)applyToMutableData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif