// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROMETADATA_H
#define MIROMETADATA_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MiroMetadata : NSObject

@property (retain) NSArray *allRanges; // ivar: _allRanges
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) NSArray *loudnessRanges; // ivar: _loudnessRanges


-(void)addRanges:(id)arg0 ;
-(void)getMetadata;
-(void)removeRangesOfType:(NSUInteger)arg0 ;
-(void)setRanges:(id)arg0 ;


@end


#endif