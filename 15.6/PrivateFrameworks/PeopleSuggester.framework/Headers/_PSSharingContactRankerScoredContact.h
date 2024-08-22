// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSSHARINGCONTACTRANKERSCOREDCONTACT_H
#define _PSSHARINGCONTACTRANKERSCOREDCONTACT_H

@class _CDInteraction;

#import <Foundation/Foundation.h>


@interface _PSSharingContactRankerScoredContact : NSObject

@property (retain, nonatomic) _CDInteraction *interaction; // ivar: _interaction
@property (nonatomic) CGFloat score; // ivar: _score


-(id)initWithScore:(CGFloat)arg0 interaction:(id)arg1 ;


@end


#endif