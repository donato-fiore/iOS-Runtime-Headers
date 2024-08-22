// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11NOTESSHAREDP33_452BF3924CAE69326F83BAE5FEEBFB4234CUSTOMREPLACEMENTREGULAREXPRESSION_H
#define _TTC11NOTESSHAREDP33_452BF3924CAE69326F83BAE5FEEBFB4234CUSTOMREPLACEMENTREGULAREXPRESSION_H

@class NSRegularExpression;



@interface _TtC11NotesSharedP33_452BF3924CAE69326F83BAE5FEEBFB4234CustomReplacementRegularExpression : NSRegularExpression {
    ? replaceBlock;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithPattern:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)replacementStringForResult:(id)arg0 inString:(id)arg1 offset:(NSInteger)arg2 template:(id)arg3 ;


@end


#endif