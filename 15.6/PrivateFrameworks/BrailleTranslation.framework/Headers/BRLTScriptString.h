// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRLTSCRIPTSTRING_H
#define BRLTSCRIPTSTRING_H

@class NSString, NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BRLTScriptString : NSObject <NSCopying>



@property (readonly, nonatomic) _NSRange focus; // ivar: _focus
@property (readonly, nonatomic) _NSRange selection; // ivar: _selection
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (retain, nonatomic) NSMutableArray *tokenRanges; // ivar: _tokenRanges


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToScriptString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithString:(id)arg0 selection:(struct _NSRange )arg1 ;
-(id)initWithString:(id)arg0 selection:(struct _NSRange )arg1 focus:(struct _NSRange )arg2 token:(NSUInteger)arg3 ;
-(struct _NSRange )_backwardEditingAtomForCursorLocation:(NSUInteger)arg0 isBreak:(*BOOL)arg1 ;
-(struct _NSRange )_backwardEditingAtomForSelection:(struct _NSRange )arg0 isBreak:(*BOOL)arg1 ;
-(struct _NSRange )backwardEditingAtom;
-(struct _NSRange )deleteMergeAtom;
-(struct _NSRange )forwardEditingAtom;
-(struct _NSRange )forwardEditingAtomForCursorLocation:(NSUInteger)arg0 ;
-(void)_addSelectionRange:(struct _NSRange )arg0 ;
-(void)addString:(id)arg0 selection:(struct _NSRange )arg1 focus:(struct _NSRange )arg2 token:(NSUInteger)arg3 ;


@end


#endif