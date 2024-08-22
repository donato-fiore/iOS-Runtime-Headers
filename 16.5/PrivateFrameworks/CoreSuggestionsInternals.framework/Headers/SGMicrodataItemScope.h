// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMICRODATAITEMSCOPE_H
#define SGMICRODATAITEMSCOPE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SGMicrodataItemScope : NSObject

@property (readonly, nonatomic) NSArray *itemProps; // ivar: _itemProps


-(BOOL)isReferencedBy:(id)arg0 ;
-(id)init;
-(void)addItemProp:(id)arg0 ;


@end


#endif