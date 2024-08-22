// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMEMORIESBLACKLISTACCESSORYVIEWSPEC_H
#define PXMEMORIESBLACKLISTACCESSORYVIEWSPEC_H


#import <Foundation/Foundation.h>


@interface PXMemoriesBlacklistAccessoryViewSpec : NSObject

@property (readonly, nonatomic) CGRect accessoryViewFrame; // ivar: _accessoryViewFrame
@property (readonly, nonatomic) CGRect contentViewFrame; // ivar: _contentViewFrame
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)specWithFrame:(struct CGRect )arg0 ;
-(id)initWithContentViewFrame:(struct CGRect )arg0 ;


@end


#endif