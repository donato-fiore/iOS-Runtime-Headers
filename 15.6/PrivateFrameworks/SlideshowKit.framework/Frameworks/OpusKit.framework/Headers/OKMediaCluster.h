// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKMEDIACLUSTER_H
#define OKMEDIACLUSTER_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface OKMediaCluster : NSObject

@property (nonatomic) BOOL isUnknown; // ivar: _isUnknown
@property (readonly, retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)uniqueURLs;
-(void)dealloc;


@end


#endif