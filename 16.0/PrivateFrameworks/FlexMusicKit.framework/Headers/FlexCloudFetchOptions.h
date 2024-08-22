// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLEXCLOUDFETCHOPTIONS_H
#define FLEXCLOUDFETCHOPTIONS_H

@class NSPredicate, NSArray;

#import <Foundation/Foundation.h>


@interface FlexCloudFetchOptions : NSObject

@property (nonatomic) BOOL localOnly; // ivar: _localOnly
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (retain, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors




@end


#endif