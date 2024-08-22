// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCELLCONFIGURATIONCACHE_H
#define SUCELLCONFIGURATIONCACHE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SUCellConfigurationCache : NSObject {
    NSMutableArray *_configurations;
}


@property (retain, nonatomic) id *cellContext; // ivar: _cellContext


-(id)configurationForRow:(NSUInteger)arg0 ;
-(id)initWithClass:(Class)arg0 tableHeight:(CGFloat)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)resetLayoutCaches;


@end


#endif