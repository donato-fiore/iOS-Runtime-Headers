// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNACCOUNTSANDGROUPSSECTION_H
#define CNACCOUNTSANDGROUPSSECTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CNAccountsAndGroupsSection : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) id *titleProvider; // ivar: _titleProvider


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif