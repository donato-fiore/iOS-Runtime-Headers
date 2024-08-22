// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCLOCALPLAYERINDICATOR_H
#define GCLOCALPLAYERINDICATOR_H

@class NSString;
@protocol GCControllerPlayerIndicator, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCLocalPlayerIndicator : NSObject <GCControllerPlayerIndicator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier;
@property NSInteger playerIndex; // ivar: _playerIndex
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GCControllerPlayerIndicator> *systemPlayerIndicatorProxy; // ivar: _systemPlayerIndicatorProxy


-(id)initWithInitialValue:(NSInteger)arg0 systemPlayerIndicatorProxy:(id)arg1 ;
-(void)setController:(id)arg0 ;


@end


#endif