// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRSPEEDBUMPITEM_H
#define HRSPEEDBUMPITEM_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface HRSpeedBumpItem : NSObject

@property (readonly, nonatomic) NSString *body; // ivar: _body
@property (readonly, nonatomic) NSArray *bubbles; // ivar: _bubbles
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 body:(id)arg1 bubbles:(id)arg2 ;


@end


#endif