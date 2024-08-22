// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWBSACTIONRESPONSESETTINGS_H
#define _SWBSACTIONRESPONSESETTINGS_H

@class BSMutableSettings;

#import <Foundation/Foundation.h>


@interface _SWBSActionResponseSettings : NSObject

@property (retain, nonatomic) BSMutableSettings *mutableSettings; // ivar: _mutableSettings


-(id)bsSettings;
-(id)init;
-(void)setFlag:(BOOL)arg0 forSetting:(NSUInteger)arg1 ;
-(void)setObject:(id)arg0 forSetting:(NSUInteger)arg1 ;


@end


#endif