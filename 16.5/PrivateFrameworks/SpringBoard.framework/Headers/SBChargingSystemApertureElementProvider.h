// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCHARGINGSYSTEMAPERTUREELEMENTPROVIDER_H
#define SBCHARGINGSYSTEMAPERTUREELEMENTPROVIDER_H

@class NSString;
@protocol SAElementIdentifying;

#import <Foundation/Foundation.h>


@interface SBChargingSystemApertureElementProvider : NSObject <SAElementIdentifying>



@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *elementIdentifier; // ivar: _elementIdentifier
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)powerElementWithBatteryCapacity:(CGFloat)arg0 ;


@end


#endif