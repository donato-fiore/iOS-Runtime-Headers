// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDRRESETOPTIONS_H
#define DDRRESETOPTIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DDRResetOptions : NSObject <NSSecureCoding>



@property (nonatomic) BOOL disallowProximitySetup; // ivar: _disallowProximitySetup
@property (nonatomic) BOOL eraseDataPlan; // ivar: _eraseDataPlan
@property (nonatomic) BOOL hideProgress; // ivar: _hideProgress


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif