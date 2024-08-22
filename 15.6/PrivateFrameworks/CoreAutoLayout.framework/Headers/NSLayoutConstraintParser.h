// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSLAYOUTCONSTRAINTPARSER_H
#define NSLAYOUTCONSTRAINTPARSER_H

@class NSString, NSDictionary, NSMutableArray;
@protocol NSLayoutItem;

#import <Foundation/Foundation.h>


@interface NSLayoutConstraintParser : NSObject {
    NSString *_line;
    char * _lineChars;
    NSUInteger _lineLength;
    NSUInteger _opts;
    BOOL _useHorizontalArrangement;
    NSDictionary *_metrics;
    NSDictionary *_views;
    id<NSLayoutItem> *_containerView;
    NSMutableArray *_constraints;
    NSMutableArray *_unflushedWidthConstraints;
    NSMutableArray *_alignmentConstraints;
    NSUInteger _currentCharacter;
    NSMutableArray *_incompleteConstraints;
    id<NSLayoutItem> *_parsedLeftView;
    id<NSLayoutItem> *_parsedRightView;
    id<NSLayoutItem> *_parsedConstrainedWidthView;
}




+(id)constraintsWithVisualFormat:(id)arg0 options:(NSUInteger)arg1 metrics:(id)arg2 views:(id)arg3 ;
-(CGFloat)parseConstant;
-(id)constraints;
-(id)description;
-(id)initWithFormat:(id)arg0 options:(NSUInteger)arg1 metrics:(id)arg2 views:(id)arg3 ;
-(id)parseView;
-(struct _NSRange )rangeOfName;
-(void)dealloc;
-(void)failWithDescription:(id)arg0 ;
-(void)findContainerView;
-(void)finishConstraint;
-(void)flushWidthConstraints;
-(void)parse;
-(void)parseConnection;
-(void)parseOp;
-(void)parsePredicate;
-(void)parsePredicateList;
-(void)parsePredicateWithParentheses;


@end


#endif