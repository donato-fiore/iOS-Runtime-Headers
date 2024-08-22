// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKJSUSERDEFAULTS_H
#define IKJSUSERDEFAULTS_H

@protocol IKJSUserDefaults, IKAppUserDefaultsStoring;


#import "IKJSObject.h"

@interface IKJSUserDefaults : IKJSObject <IKJSUserDefaults>



@property (weak, nonatomic) NSObject<IKAppUserDefaultsStoring> *userDefaultsStorage; // ivar: _userDefaultsStorage


-(id)getData:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 userDefaultsStorage:(id)arg1 ;
-(void)removeData:(id)arg0 ;
-(void)setData:(id)arg0 ;


@end


#endif