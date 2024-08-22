// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSPERSISTENTCONNECTIONDEFAULTS_H
#define BKSPERSISTENTCONNECTIONDEFAULTS_H

@class BSAbstractDefaultDomain, NSString;



@interface BKSPersistentConnectionDefaults : BSAbstractDefaultDomain

@property (nonatomic) int forceDemoMaxHBI;
@property (retain, nonatomic) NSString *wifiInterfaceName;


-(id)init;
-(void)_bindAndRegisterDefaults;


@end


#endif