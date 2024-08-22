// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTENTVIEWEDITINGCONFIGURATION_H
#define _UICONTENTVIEWEDITINGCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIContentViewEditingConfiguration : NSObject <NSCopying>



@property (readonly, copy, nonatomic) id *didEndHandler; // ivar: _didEndHandler
@property (nonatomic) BOOL selectAllTextWhenEditingBegins; // ivar: _selectAllTextWhenEditingBegins
@property (copy, nonatomic) id *shouldBeginHandler; // ivar: _shouldBeginHandler
@property (copy, nonatomic) id *shouldChangeHandler; // ivar: _shouldChangeHandler
@property (copy, nonatomic) id *shouldEndHandler; // ivar: _shouldEndHandler
@property (nonatomic) BOOL useTextInputAsLabel; // ivar: _useTextInputAsLabel


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDidEndHandler:(id)arg0 ;


@end


#endif