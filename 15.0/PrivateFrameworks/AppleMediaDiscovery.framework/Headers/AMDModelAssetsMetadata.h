// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDMODELASSETSMETADATA_H
#define AMDMODELASSETSMETADATA_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface AMDModelAssetsMetadata : NSObject

@property (retain, nonatomic) NSDictionary *bitmasks; // ivar: _bitmasks
@property (retain, nonatomic) NSArray *dictionaryIds; // ivar: _dictionaryIds


-(BOOL)isValid;
-(id)getBitmasks;
-(id)getDictionaryIds;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif