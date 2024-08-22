// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTENTVIEWEDITINGSTATE_H
#define _UICONTENTVIEWEDITINGSTATE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIContentViewEditingState : NSObject <NSCopying>



@property (readonly, nonatomic) _NSRange proposedReplacementRange; // ivar: _proposedReplacementRange
@property (readonly, nonatomic) NSString *proposedReplacementText; // ivar: _proposedReplacementText
@property (readonly, nonatomic) NSString *text; // ivar: _text


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithText:(id)arg0 ;
-(id)initWithText:(id)arg0 proposedReplacementText:(id)arg1 proposedReplacementRange:(struct _NSRange )arg2 ;


@end


#endif