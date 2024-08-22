// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIVIEWELEMENTDATASOURCE_H
#define VUIVIEWELEMENTDATASOURCE_H

@class NSDictionary, IKViewElement;

#import <Foundation/Foundation.h>

#import "VUIRouterDataSource.h"

@interface VUIViewElementDataSource : NSObject

@property (copy, nonatomic) NSDictionary *dataDictionary; // ivar: _dataDictionary
@property (retain, nonatomic) VUIRouterDataSource *routerDataSource; // ivar: _routerDataSource
@property (weak, nonatomic) IKViewElement *viewElement; // ivar: _viewElement


-(id)initWithDataDictionary:(id)arg0 viewElement:(id)arg1 ;


@end


#endif