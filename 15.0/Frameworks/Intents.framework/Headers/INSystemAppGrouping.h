// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSYSTEMAPPGROUPING_H
#define INSYSTEMAPPGROUPING_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface INSystemAppGrouping : NSObject

@property (retain, nonatomic) NSArray *iOS; // ivar: _iOS
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *macOS; // ivar: _macOS
@property (retain, nonatomic) NSArray *watchOS; // ivar: _watchOS


+(id)groupingForKey:(id)arg0 iOS:(id)arg1 macOS:(id)arg2 watchOS:(id)arg3 ;


@end


#endif