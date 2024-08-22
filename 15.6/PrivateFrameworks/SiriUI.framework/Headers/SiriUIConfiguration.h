// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUICONFIGURATION_H
#define SIRIUICONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SiriUIConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL allowResizingBetweenModes; // ivar: _allowResizingBetweenModes
@property (readonly, nonatomic) NSInteger flamesViewFidelity; // ivar: _flamesViewFidelity
@property (readonly, nonatomic) BOOL isSystemHostedPresentation; // ivar: _isSystemHostedPresentation
@property (readonly, nonatomic) NSInteger siriViewMode; // ivar: _siriViewMode


-(id)_NSStringFromSiriViewMode:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFlamesViewFidelity:(NSInteger)arg0 isSystemHostedPresentation:(BOOL)arg1 ;
-(id)initWithFlamesViewFidelity:(NSInteger)arg0 isSystemHostedPresentation:(BOOL)arg1 allowResizingBetweenModes:(BOOL)arg2 siriViewMode:(NSInteger)arg3 ;


@end


#endif