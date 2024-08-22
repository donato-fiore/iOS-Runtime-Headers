// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKDIRECTORYSEARCHQUERY_H
#define EKDIRECTORYSEARCHQUERY_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface EKDirectorySearchQuery : NSObject

@property (nonatomic) BOOL findGroups; // ivar: _findGroups
@property (nonatomic) BOOL findLocations; // ivar: _findLocations
@property (nonatomic) BOOL findResources; // ivar: _findResources
@property (nonatomic) BOOL findUsers; // ivar: _findUsers
@property (nonatomic) NSUInteger resultLimit; // ivar: _resultLimit
@property (retain, nonatomic) NSSet *terms; // ivar: _terms




@end


#endif