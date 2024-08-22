// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCROEVENT_H
#define SCROEVENT_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SCROEvent : NSObject {
    int _handlerType;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_setDictionary;
    NSMutableDictionary *_getDictionary;
    NSMutableArray *_actions;
    BOOL _readOnly;
}




+(id)brailleEvent;
-(id)claimDictionary;
-(id)claimValueForKey:(int)arg0 ;
-(id)initForHandlerType:(int)arg0 ;
-(id)mainDictionary;
-(int)handlerType;
-(void)performWithHandler:(id)arg0 trusted:(BOOL)arg1 ;
-(void)requestPerformActionForKey:(int)arg0 ;
-(void)requestRegisterCallbackForKey:(int)arg0 ;
-(void)requestSetValue:(id)arg0 forKey:(int)arg1 ;
-(void)requestValueForKey:(int)arg0 ;
-(void)setClaimDictionary:(id)arg0 ;
-(void)setMainDictionary:(id)arg0 ;


@end


#endif