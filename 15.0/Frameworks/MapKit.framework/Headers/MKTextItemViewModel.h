// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTEXTITEMVIEWMODEL_H
#define MKTEXTITEMVIEWMODEL_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MKTextItemViewModel : NSObject

@property (copy, nonatomic) NSArray *values; // ivar: _values


-(NSUInteger)numberOfRows;
-(id)initWithTextItemContainer:(id)arg0 labelsFont:(id)arg1 labelsSpacing:(CGFloat)arg2 maxWidth:(CGFloat)arg3 ;
-(id)stringsForRowAtIndex:(NSUInteger)arg0 ;


@end


#endif