// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMBRANDMANAGER_H
#define IMBRANDMANAGER_H

@class BSUIBrandManager;

#import <Foundation/Foundation.h>


@interface IMBrandManager : NSObject

@property (retain, nonatomic) BSUIBrandManager *brandManager; // ivar: _brandManager


+(id)sharedInstance;
-(id)_init;
-(void)brandWithURI:(id)arg0 completion:(id)arg1 ;


@end


#endif