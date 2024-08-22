// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPROCESSNETWORKSOURCE_H
#define PLPROCESSNETWORKSOURCE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PLProcessNetworkSource : NSObject

@property (copy, nonatomic) NSDictionary *countsDictionary; // ivar: _countsDictionary
@property (copy, nonatomic) NSDictionary *descriptionDictionary; // ivar: _descriptionDictionary
@property (nonatomic) *__NStatSource source; // ivar: _source


-(id)initWithSource:(struct __NStatSource *)arg0 ;


@end


#endif