// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STTELEPHONYSTATUSDOMAINSIMINFODIFF_H
#define STTELEPHONYSTATUSDOMAINSIMINFODIFF_H

@class BSSettings, NSString;
@protocol STStatusDomainDataDiff, NSCopying;

#import <Foundation/Foundation.h>


@interface STTelephonyStatusDomainSIMInfoDiff : NSObject <STStatusDomainDataDiff, NSCopying>



@property (readonly, copy, nonatomic) BSSettings *changes; // ivar: _changes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)diffFromInfo:(id)arg0 toInfo:(id)arg1 ;
+(void)_resolveCombinedChanges:(id)arg0 forObjectEntry:(NSUInteger)arg1 baseChanges:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)diffByApplyingDiff:(id)arg0 ;
-(id)infoByApplyingToInfo:(id)arg0 ;
-(id)init;
-(id)initWithChanges:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)applyToMutableInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif