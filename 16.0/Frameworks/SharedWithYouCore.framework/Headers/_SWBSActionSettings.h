// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SWBSACTIONSETTINGS_H
#define _SWBSACTIONSETTINGS_H

@class BSMutableSettings;

#import <Foundation/Foundation.h>


@interface _SWBSActionSettings : NSObject

@property (retain, nonatomic) BSMutableSettings *mutableSettings; // ivar: _mutableSettings


-(id)bsSettings;
-(id)init;
-(void)setObject:(id)arg0 forSetting:(NSUInteger)arg1 ;


@end


#endif