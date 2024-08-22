// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCTINCANSETTINGS_H
#define NTKCTINCANSETTINGS_H


#import <Foundation/Foundation.h>


@interface NTKCTinCanSettings : NSObject

@property (readonly, nonatomic) BOOL tinCanEnabled; // ivar: _tinCanEnabled


+(id)sharedInstance;
-(id)init;
-(void)_handlePrefsChanged;
-(void)_notifyClientsOfChange;
-(void)_readValue;
-(void)dealloc;


@end


#endif