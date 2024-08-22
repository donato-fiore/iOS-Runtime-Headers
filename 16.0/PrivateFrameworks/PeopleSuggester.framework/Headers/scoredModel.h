// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCOREDMODEL_H
#define SCOREDMODEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface scoredModel : NSObject

@property (retain, nonatomic) NSString *modelKey; // ivar: _modelKey
@property CGFloat score; // ivar: _score


-(NSInteger)compare:(id)arg0 ;
-(id)initWithModelKey:(id)arg0 score:(CGFloat)arg1 ;


@end


#endif