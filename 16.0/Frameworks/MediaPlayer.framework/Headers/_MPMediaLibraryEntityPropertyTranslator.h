// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPMEDIALIBRARYENTITYPROPERTYTRANSLATOR_H
#define _MPMEDIALIBRARYENTITYPROPERTYTRANSLATOR_H


#import <Foundation/Foundation.h>


@interface _MPMediaLibraryEntityPropertyTranslator : NSObject {
    ? _propertiesToFetchMap;
    ? _propertiesToSortMap;
}


@property (copy, nonatomic) id *filterTransformer; // ivar: _filterTransformer
@property ? propertiesToFetchMap;
@property ? propertiesToSortMap;
@property (copy, nonatomic) id *sortTransformer; // ivar: _sortTransformer
@property (copy, nonatomic) id *valueTransformer; // ivar: _valueTransformer




@end


#endif