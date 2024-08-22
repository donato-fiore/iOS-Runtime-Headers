// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAJOBCONSTRAINTS_H
#define PHAJOBCONSTRAINTS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PHAJobConstraints : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL canRunAutomaticBackgroundAnalysis; // ivar: _canRunAutomaticBackgroundAnalysis
@property (readonly, nonatomic) BOOL canRunAutomaticForegroundAnalysis; // ivar: _canRunAutomaticForegroundAnalysis
@property (readonly, nonatomic) BOOL canRunUserInitiatedForegroundAnalysis; // ivar: _canRunUserInitiatedForegroundAnalysis
@property (readonly, nonatomic) BOOL canUseNetwork; // ivar: _canUseNetwork
@property (nonatomic) BOOL cancelsTurboMode; // ivar: _cancelsTurboMode
@property (nonatomic, getter=isTurboMode) BOOL turboMode; // ivar: _turboMode


+(id)constraintsWithAllAllowances;
+(id)constraintsWithNoAllowances;
-(BOOL)isEqualToConstraints:(id)arg0 ;
-(id)asBitString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromBitString:(id)arg0 ;
-(id)initWithCanRunAutomaticBackgroundAnalysis:(BOOL)arg0 canRunAutomaticForegroundAnalysis:(BOOL)arg1 canRunUserInitiatedForegroundAnalysis:(BOOL)arg2 canUseNetwork:(BOOL)arg3 ;
-(id)statusAsDictionary;
-(unsigned int)qosClassForProcessing;
-(void)applyConstraints:(id)arg0 usingMask:(id)arg1 ;


@end


#endif