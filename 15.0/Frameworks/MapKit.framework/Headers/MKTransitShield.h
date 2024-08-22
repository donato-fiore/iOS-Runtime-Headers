// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTRANSITSHIELD_H
#define MKTRANSITSHIELD_H

@class NSString;
@protocol GEOTransitShieldDataSource;

#import <Foundation/Foundation.h>


@interface MKTransitShield : NSObject <GEOTransitShieldDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *shieldColorString; // ivar: _shieldColorString
@property (readonly, nonatomic) NSString *shieldText; // ivar: _shieldText
@property (readonly, nonatomic) NSInteger shieldType; // ivar: _shieldType
@property (readonly) Class superclass;


-(id)initWithShieldType:(NSInteger)arg0 text:(id)arg1 color:(id)arg2 ;


@end


#endif