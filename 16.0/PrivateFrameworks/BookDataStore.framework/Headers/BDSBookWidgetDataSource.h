// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSBOOKWIDGETDATASOURCE_H
#define BDSBOOKWIDGETDATASOURCE_H

@protocol BDSBookWidgetDataProviding;

#import <Foundation/Foundation.h>


@interface BDSBookWidgetDataSource : NSObject <BDSBookWidgetDataProviding>





-(void)getBookWidgetDataWithLimit:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif