// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISPROCESSPROPERTYLISTOPERATION_H
#define ISPROCESSPROPERTYLISTOPERATION_H

@class NSDictionary;


#import "ISOperation.h"
#import "ISPropertyListProvider.h"

@interface ISProcessPropertyListOperation : ISOperation {
    NSDictionary *_propertyList;
}


@property (retain) ISPropertyListProvider *dataProvider; // ivar: _dataProvider


-(id)initWithPropertyList:(id)arg0 ;
-(void)dealloc;
-(void)run;


@end


#endif