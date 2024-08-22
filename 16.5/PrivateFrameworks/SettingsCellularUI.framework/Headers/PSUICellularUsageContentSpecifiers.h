// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUICELLULARUSAGECONTENTSPECIFIERS_H
#define PSUICELLULARUSAGECONTENTSPECIFIERS_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface PSUICellularUsageContentSpecifiers : NSObject

@property (retain, nonatomic) NSMutableArray *appSpecifiers; // ivar: _appSpecifiers
@property (retain, nonatomic) NSArray *leadingContentSpecifiers; // ivar: _leadingContentSpecifiers
@property (retain, nonatomic) NSArray *trailingContentSpecifiers; // ivar: _trailingContentSpecifiers


-(id)specifiers;


@end


#endif