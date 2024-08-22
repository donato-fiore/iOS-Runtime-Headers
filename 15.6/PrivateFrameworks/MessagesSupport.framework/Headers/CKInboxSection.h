// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKINBOXSECTION_H
#define CKINBOXSECTION_H

@class NSString, NSUUID, NSArray;

#import <Foundation/Foundation.h>


@interface CKInboxSection : NSObject

@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (copy, nonatomic) NSString *header; // ivar: _header
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) NSArray *items; // ivar: _items


-(id)initWithHeader:(id)arg0 footer:(id)arg1 items:(id)arg2 ;


@end


#endif