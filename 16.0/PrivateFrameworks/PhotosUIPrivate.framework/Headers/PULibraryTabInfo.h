// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PULIBRARYTABINFO_H
#define PULIBRARYTABINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PULibraryTabInfo : NSObject

@property (readonly, nonatomic) int contentMode; // ivar: _contentMode
@property (readonly, nonatomic) NSString *iconName; // ivar: _iconName
@property (readonly, nonatomic) NSString *labelKey; // ivar: _labelKey


+(id)tabInfoWithLabelKey:(id)arg0 iconName:(id)arg1 contentMode:(int)arg2 ;
-(id)initWithLabelKey:(id)arg0 iconName:(id)arg1 contentMode:(int)arg2 ;


@end


#endif