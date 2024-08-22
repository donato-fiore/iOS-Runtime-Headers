// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPENCILTEXTINPUTELEMENT_H
#define PKPENCILTEXTINPUTELEMENT_H

@protocol NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface PKPencilTextInputElement : NSObject

@property (readonly, nonatomic) CGRect frame; // ivar: _frame
@property (readonly, copy, nonatomic) NSObject<NSObject><NSCopying> *identifier; // ivar: _identifier


-(id)description;
-(id)initWithIdentifier:(id)arg0 frame:(struct CGRect )arg1 ;


@end


#endif