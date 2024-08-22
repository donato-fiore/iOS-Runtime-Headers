// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INVOKEMAKERINFO_H
#define INVOKEMAKERINFO_H


#import <Foundation/Foundation.h>


@interface InvokeMakerInfo : NSObject

@property (nonatomic) SEL selector; // ivar: _selector
@property (retain, nonatomic) id *target; // ivar: _target


-(id)initWithSel:(SEL)arg0 andTarget:(id)arg1 ;


@end


#endif