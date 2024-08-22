// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCONCRETENOTIFYINGMUTABLEATTRIBUTEDSTRING_H
#define NSCONCRETENOTIFYINGMUTABLEATTRIBUTEDSTRING_H

@class NSConcreteMutableAttributedString;



@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString {
    id *_delegate;
}




+(Class)_mutableStringClass;
-(id)delegate;
-(void)beginEditing;
-(void)edited:(NSUInteger)arg0 range:(struct _NSRange )arg1 changeInLength:(NSInteger)arg2 ;
-(void)endEditing;
-(void)setDelegate:(id)arg0 ;


@end


#endif