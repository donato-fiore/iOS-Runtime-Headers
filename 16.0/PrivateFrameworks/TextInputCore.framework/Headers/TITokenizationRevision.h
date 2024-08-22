// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITOKENIZATIONREVISION_H
#define TITOKENIZATIONREVISION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TITokenizationRevision : NSObject

@property (readonly, nonatomic) NSMutableArray *branchTokens; // ivar: _branchTokens
@property (nonatomic) NSUInteger branchedTokenIndex; // ivar: _branchedTokenIndex
@property (nonatomic) NSUInteger mergedTokenIndex; // ivar: _mergedTokenIndex
@property (nonatomic) _TIRevisionHistoryTokenIterator originalIterator; // ivar: _originalIterator
@property (nonatomic) _NSRange originalSelectedTokenRange; // ivar: _originalSelectedTokenRange
@property (nonatomic) NSUInteger revisedDocumentLocation; // ivar: _revisedDocumentLocation


-(id)init;
-(id)initWithTokenIterator:(struct _TIRevisionHistoryTokenIterator )arg0 ;


@end


#endif