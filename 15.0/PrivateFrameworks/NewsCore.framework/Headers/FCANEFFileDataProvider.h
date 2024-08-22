// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCANEFFILEDATAPROVIDER_H
#define FCANEFFILEDATAPROVIDER_H

@class NSData, NSString;
@protocol FCAssetDataProvider;

#import <Foundation/Foundation.h>

#import "FCInterestToken.h"

@interface FCANEFFileDataProvider : NSObject <FCAssetDataProvider>



@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *filePath; // ivar: _filePath
@property (readonly, nonatomic) FCInterestToken *holdToken; // ivar: _holdToken
@property (readonly, nonatomic) BOOL isRawFileConsumable;
@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (readonly, copy, nonatomic) NSData *wrappingKey; // ivar: _wrappingKey


-(id)initWithFilePath:(id)arg0 wrappingKey:(id)arg1 options:(NSInteger)arg2 holdToken:(id)arg3 ;


@end


#endif