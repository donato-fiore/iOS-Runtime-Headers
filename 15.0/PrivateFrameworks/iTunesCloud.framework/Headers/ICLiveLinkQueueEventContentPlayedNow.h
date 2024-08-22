// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICLIVELINKQUEUEEVENTCONTENTPLAYEDNOW_H
#define ICLIVELINKQUEUEEVENTCONTENTPLAYEDNOW_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ICLiveLinkQueueEventContentPlayedNow : NSObject

@property (readonly, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, nonatomic) NSInteger containerKind; // ivar: _containerKind
@property (readonly, copy, nonatomic) NSString *containerMediaIdentifier; // ivar: _containerMediaIdentifier
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers; // ivar: _itemIdentifiers
@property (readonly, copy, nonatomic) NSString *startItemIdentifier; // ivar: _startItemIdentifier


-(id)description;
-(id)initWithItemIdentifiers:(id)arg0 containerKind:(NSInteger)arg1 containerIdentifier:(id)arg2 containerMediaIdentifier:(id)arg3 startItemIdentifier:(id)arg4 ;


@end


#endif