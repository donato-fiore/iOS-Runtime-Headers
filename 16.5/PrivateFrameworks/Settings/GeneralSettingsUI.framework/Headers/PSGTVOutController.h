// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGTVOUTCONTROLLER_H
#define PSGTVOUTCONTROLLER_H

@class PSListController;


#import "PSGTVOutManager.h"

@interface PSGTVOutController : PSListController {
    PSGTVOutManager *_tvOutManager;
}




-(id)init;
-(id)isWidescreen:(id)arg0 ;
-(id)specifiers;
-(id)tvSignal:(id)arg0 ;
-(void)dealloc;
-(void)handleTVOutChange;
-(void)setTVSignal:(id)arg0 specifier:(id)arg1 ;
-(void)setWidescreen:(id)arg0 specifier:(id)arg1 ;
-(void)writeValue:(struct __CFString *)arg0 forKey:(struct __CFString *)arg1 ;


@end


#endif