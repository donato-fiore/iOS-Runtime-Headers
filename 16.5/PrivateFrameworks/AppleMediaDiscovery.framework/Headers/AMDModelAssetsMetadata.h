// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDMODELASSETSMETADATA_H
#define AMDMODELASSETSMETADATA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AMDModelAssetsMetadata : NSObject

@property (retain, nonatomic) NSArray *dictionaryIds; // ivar: _dictionaryIds


-(BOOL)isValid;
-(id)getDictionaryIds;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif