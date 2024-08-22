// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IEINTENT_H
#define IEINTENT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface IEIntent : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSDictionary *slots; // ivar: _slots


-(id)initWithName:(id)arg0 ;


@end


#endif