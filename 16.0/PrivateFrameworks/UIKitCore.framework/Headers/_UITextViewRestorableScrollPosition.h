// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTVIEWRESTORABLESCROLLPOSITION_H
#define _UITEXTVIEWRESTORABLESCROLLPOSITION_H

@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface _UITextViewRestorableScrollPosition : NSObject <NSCoding>

 {
    _NSRange _range;
    CGFloat _offsetInLine;
}




+(id)restorableScrollPositionForStateRestoration:(id)arg0 ;
+(id)restorableScrollPositionForTextView:(id)arg0 ;
+(id)restorableScrollPositionWithDictionary:(id)arg0 ;
+(id)restorableScrollPositionWithRange:(struct _NSRange )arg0 ;
-(CGFloat)offsetWithinLine;
-(id)debugDescription;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTextView:(id)arg0 ;
-(id)initWithTextViewForStateRestoration:(id)arg0 ;
-(struct _NSRange )range;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif