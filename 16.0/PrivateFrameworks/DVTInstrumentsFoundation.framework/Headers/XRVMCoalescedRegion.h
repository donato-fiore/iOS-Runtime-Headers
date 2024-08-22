// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XRVMCOALESCEDREGION_H
#define XRVMCOALESCEDREGION_H

@class NSMutableArray, NSString;


#import "XRVMRegion.h"

@interface XRVMCoalescedRegion : XRVMRegion {
    NSMutableArray *_subRegions;
    NSString *_groupName;
    NSUInteger _virtualSize;
    unsigned int _multiplicityFlags;
}




-(BOOL)isFakeAggregate;
-(NSUInteger)virtualSize;
-(id)displayPath;
-(id)displayType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRegions:(id)arg0 groupName:(id)arg1 ;
-(id)subRegions;
-(void)addRegion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sortSubregionsWithComparator:(id)arg0 ;


@end


#endif