// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUITABULARLOCKUPLAYOUT_H
#define SKUITABULARLOCKUPLAYOUT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SKUITabularLockupLayout : NSObject

@property (readonly, nonatomic) NSArray *columns; // ivar: _columns


+(id)fontForLabelViewElement:(id)arg0 context:(id)arg1 ;
-(id)initWithLockup:(id)arg0 context:(id)arg1 ;
-(void)sizeColumnsToFitWidth:(CGFloat)arg0 context:(id)arg1 ;


@end


#endif