// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMPASSCODESPECIFIERPROVIDER_H
#define RMPASSCODESPECIFIERPROVIDER_H

@class RMObserverStore, NSDictionary;

#import <Foundation/Foundation.h>


@interface RMPasscodeSpecifierProvider : NSObject

@property (nonatomic) BOOL isManaged; // ivar: _isManaged
@property (retain, nonatomic) RMObserverStore *observerStore; // ivar: _observerStore
@property (copy, nonatomic) NSDictionary *passcodeSettings; // ivar: _passcodeSettings


+(void)_applyPasscodeDeclaration:(id)arg0 toConglomerate:(id)arg1 ;
-(id)description;
-(id)initWithWithObserverStore:(id)arg0 ;
-(id)specifiers;
-(void)loadPasscodeSettingsFromConfigurationWithCompletionHandler:(id)arg0 ;


@end


#endif