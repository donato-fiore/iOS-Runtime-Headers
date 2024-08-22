// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHOMESCREENCONFIGURATIONCOMPONENTS_H
#define ATXHOMESCREENCONFIGURATIONCOMPONENTS_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenConfigurationComponents : NSObject {
    NSMutableDictionary *_stackForStackedWidgetIdDictionary;
}


@property (readonly, nonatomic) NSArray *pinnedWidgets; // ivar: _pinnedWidgets
@property (readonly, nonatomic) NSArray *stackedWidgets; // ivar: _stackedWidgets
@property (readonly, nonatomic) NSArray *stacks; // ivar: _stacks


-(BOOL)containsWidgetWithBundleId:(id)arg0 kind:(id)arg1 size:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithConfigurations:(id)arg0 ;
-(id)stackForStackedWidget:(id)arg0 ;


@end


#endif