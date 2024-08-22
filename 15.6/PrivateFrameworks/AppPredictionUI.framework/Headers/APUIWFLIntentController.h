// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APUIWFLINTENTCONTROLLER_H
#define APUIWFLINTENTCONTROLLER_H

@class INIntent;
@protocol APUIWFLIntentControllerDelegate;

#import <Foundation/Foundation.h>


@interface APUIWFLIntentController : NSObject

@property (weak, nonatomic) NSObject<APUIWFLIntentControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger executionContext; // ivar: _executionContext
@property (retain, nonatomic) INIntent *intent; // ivar: _intent
@property (copy, nonatomic) id *intentProceedHandler; // ivar: _intentProceedHandler


-(id)initWithIntent:(id)arg0 ;
-(void)_logFaultFromFunction:(char *)arg0 ;
-(void)begin;
-(void)confirmationGranted:(BOOL)arg0 ;
-(void)launchAppWithCompletionHandler:(id)arg0 ;
-(void)stop;


@end


#endif