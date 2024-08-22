// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDMODELOUTPUTMETADATA_H
#define AMDMODELOUTPUTMETADATA_H


#import <Foundation/Foundation.h>


@interface AMDModelOutputMetadata : NSObject

@property NSInteger dataType; // ivar: _dataType


-(BOOL)isValid;
-(NSInteger)getDataType;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif