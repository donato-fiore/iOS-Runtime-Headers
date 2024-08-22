// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PARSMARTSEARCHV2PARAMETERS_H
#define PARSMARTSEARCHV2PARAMETERS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PARSmartSearchV2Parameters : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL enableCount; // ivar: _enableCount
@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSInteger minCount; // ivar: _minCount
@property (readonly, nonatomic) CGFloat paramA; // ivar: _paramA
@property (readonly, nonatomic) CGFloat paramB; // ivar: _paramB
@property (readonly, nonatomic) CGFloat paramC; // ivar: _paramC
@property (readonly, nonatomic) CGFloat paramK; // ivar: _paramK
@property (readonly, nonatomic) CGFloat paramM; // ivar: _paramM
@property (readonly, nonatomic) CGFloat paramQ; // ivar: _paramQ
@property (readonly, nonatomic) CGFloat paramV; // ivar: _paramV
@property (readonly, nonatomic) CGFloat windowBucket; // ivar: _windowBucket


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initFromBag:(id)arg0 ;
-(id)initFromEnabled:(BOOL)arg0 enableCount:(BOOL)arg1 minCount:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif