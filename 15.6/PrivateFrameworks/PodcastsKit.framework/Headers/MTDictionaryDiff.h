// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTDICTIONARYDIFF_H
#define MTDICTIONARYDIFF_H

@class NSMutableArray, NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface MTDictionaryDiff : NSObject

@property (retain, nonatomic) NSMutableArray *callbacks; // ivar: _callbacks
@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (retain, nonatomic) NSSet *properties; // ivar: _properties


-(id)init;
-(id)initWithProperties:(id)arg0 ;
-(void)addCallback:(id)arg0 ;


@end


#endif