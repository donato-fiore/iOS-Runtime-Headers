// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKSECTIONINFO_H
#define GKSECTIONINFO_H

@class NSArray, NSPredicate, NSString;

#import <Foundation/Foundation.h>


@interface GKSectionInfo : NSObject

@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (nonatomic) NSInteger section; // ivar: _section
@property (retain, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)description;


@end


#endif