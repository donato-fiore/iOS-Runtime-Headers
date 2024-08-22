// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWEBOPTGROUP_H
#define UIWEBOPTGROUP_H

@class NSArray;
@protocol UIWebSelectedItemPrivate;

#import <Foundation/Foundation.h>


@interface UIWebOptGroup : NSObject

@property (retain, nonatomic) NSObject<UIWebSelectedItemPrivate> *group; // ivar: _group
@property (readonly, nonatomic) NSInteger offset; // ivar: _offset
@property (retain, nonatomic) NSArray *options; // ivar: _options


-(id)initWithGroup:(id)arg0 itemOffset:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif