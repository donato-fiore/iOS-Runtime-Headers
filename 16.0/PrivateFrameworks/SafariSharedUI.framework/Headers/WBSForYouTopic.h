// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFORYOUTOPIC_H
#define WBSFORYOUTOPIC_H

@class NSArray, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface WBSForYouTopic : NSObject

@property (copy, nonatomic) NSArray *associatedTopics; // ivar: _associatedTopics
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDate *relevancyDate; // ivar: _relevancyDate
@property (nonatomic) NSUInteger source; // ivar: _source
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 identifier:(id)arg1 relevancyDate:(id)arg2 source:(NSUInteger)arg3 ;


@end


#endif