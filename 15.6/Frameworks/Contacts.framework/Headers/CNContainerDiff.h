// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTAINERDIFF_H
#define CNCONTAINERDIFF_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CNContainerDiff : NSObject

@property (retain, nonatomic) NSArray *updates; // ivar: _updates


+(id)diffContainer:(id)arg0 to:(id)arg1 ;
-(id)description;
-(id)initWithUpdates:(id)arg0 ;


@end


#endif