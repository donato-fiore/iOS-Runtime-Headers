// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SUICATOMINDEXED_H
#define _SUICATOMINDEXED_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _SUICAtomIndexed : NSObject

@property (nonatomic) NSInteger editOperation; // ivar: _editOperation
@property (nonatomic) NSUInteger indexInArrayB; // ivar: _indexInArrayB
@property (nonatomic) NSUInteger indexToEdit; // ivar: _indexToEdit
@property (retain, nonatomic) NSString *replacementText; // ivar: _replacementText


+(id)atomWithEditOperation:(NSInteger)arg0 indexToEdit:(NSUInteger)arg1 newText:(id)arg2 indexInArrayB:(NSUInteger)arg3 ;
-(id)description;
-(id)initWithEditOperation:(NSInteger)arg0 indexToEdit:(NSUInteger)arg1 newText:(id)arg2 indexInArrayB:(NSUInteger)arg3 ;


@end


#endif