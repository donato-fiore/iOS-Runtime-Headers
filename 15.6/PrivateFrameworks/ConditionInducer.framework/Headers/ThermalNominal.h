// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef THERMALNOMINAL_H
#define THERMALNOMINAL_H

@class NSString;


#import "COCondition.h"

@interface ThermalNominal : COCondition {
    NSString *_thermalLevelKey;
}


@property (nonatomic) NSInteger actualState; // ivar: _actualState
@property (nonatomic) NSInteger desiredState; // ivar: _desiredState


+(id)description;
+(id)profileFriendlyName;
+(id)thermalStateEnumToCLTMStringKey:(NSInteger)arg0 ;
-(BOOL)active;
-(BOOL)isDestructive;
-(BOOL)isInternalOnly;
-(BOOL)setUp;
-(id)identifierName;
-(id)init;
-(id)initWithThermalLevel:(NSInteger)arg0 ;
-(id)userFriendlyName;
-(void)tearDown;


@end


#endif