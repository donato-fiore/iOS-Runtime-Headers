// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDBUCKET_H
#define PDBUCKET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PDBucket : NSObject

@property (nonatomic) NSUInteger count;
@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) BOOL hasInclusiveUpperBound;
@property (nonatomic) BOOL hasInclusiveUpperBound; // ivar: _hasInclusiveUpperBound
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) CGFloat lowerInclusiveBound;
@property (nonatomic) CGFloat lowerInclusiveBound; // ivar: _lowerInclusiveBound
@property (nonatomic) CGFloat upperBound;
@property (nonatomic) CGFloat upperBound; // ivar: _upperBound


-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;


@end


#endif