// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFUNIQUEARRAYDIFFOPTIONS_H
#define HFUNIQUEARRAYDIFFOPTIONS_H


#import <Foundation/Foundation.h>


@interface HFUniqueArrayDiffOptions : NSObject

@property (nonatomic) BOOL allowMoves; // ivar: _allowMoves
@property (copy, nonatomic) id *changeComparator; // ivar: _changeComparator
@property (copy, nonatomic) id *equalComparator; // ivar: _equalComparator
@property (copy, nonatomic) id *hashGenerator; // ivar: _hashGenerator


-(id)init;


@end


#endif