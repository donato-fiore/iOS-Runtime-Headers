// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMFETCHOPTIONS_H
#define FMFETCHOPTIONS_H

@class NSPredicate, NSArray;

#import <Foundation/Foundation.h>


@interface FMFetchOptions : NSObject

@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (retain, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors


-(id)init;


@end


#endif