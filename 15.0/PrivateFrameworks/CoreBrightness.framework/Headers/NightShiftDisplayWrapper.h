// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NIGHTSHIFTDISPLAYWRAPPER_H
#define NIGHTSHIFTDISPLAYWRAPPER_H

@class NSString;
@protocol NightShiftSupportProtocol, CBContainerProtocol;

#import <Foundation/Foundation.h>


@interface NightShiftDisplayWrapper : NSObject <NightShiftSupportProtocol>

 {
    *__Display _display;
}


@property (retain) NSObject<CBContainerProtocol> *container; // ivar: _container
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyPreferenceForKey:(id)arg0 user:(id)arg1 ;
-(id)init;
-(id)initWithDisplay:(struct __Display *)arg0 ;
-(void)dealloc;
-(void)setNightShiftFactorDictionary:(id)arg0 ;
-(void)setPreference:(id)arg0 forKey:(id)arg1 user:(id)arg2 ;


@end


#endif