// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TMLUITABLEVIEWSECTION_H
#define TMLUITABLEVIEWSECTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface TMLUITableViewSection : NSObject

@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (copy, nonatomic) NSString *header; // ivar: _header
@property (readonly, nonatomic) NSInteger numberOfRows;
@property (copy, nonatomic) NSArray *rows; // ivar: _rows


-(id)cellForRow:(NSInteger)arg0 ;


@end


#endif