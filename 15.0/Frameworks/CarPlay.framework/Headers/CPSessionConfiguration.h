// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSESSIONCONFIGURATION_H
#define CPSESSIONCONFIGURATION_H

@class CARSessionStatus, NSString, CPSTemplateEnvironment;
@protocol CARSessionObserving, CPSessionConfigurationDelegate;

#import <Foundation/Foundation.h>


@interface CPSessionConfiguration : NSObject <CARSessionObserving>



@property (nonatomic) NSUInteger contentStyle; // ivar: _contentStyle
@property (retain, nonatomic) CARSessionStatus *currentStatus; // ivar: _currentStatus
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPSessionConfigurationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger limitedUserInterfaces; // ivar: _limitedUserInterfaces
@property (readonly) Class superclass;
@property (weak, nonatomic) CPSTemplateEnvironment *templateEnvironment; // ivar: _templateEnvironment


-(NSUInteger)convertLimitableUserInterfaces:(NSUInteger)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 templateEnvironment:(id)arg1 ;
-(void)_limitedUIDidChange:(id)arg0 ;
-(void)_nightModeDidChange:(id)arg0 ;
-(void)_updateLimitedUIStatus;
-(void)_updateNightMode;
-(void)dealloc;
-(void)sessionDidConnect:(id)arg0 ;


@end


#endif