// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCRAWFILEDATAPROVIDER_H
#define FCRAWFILEDATAPROVIDER_H

@class NSData, NSString;
@protocol FCAssetDataProvider;

#import <Foundation/Foundation.h>

#import "FCInterestToken.h"

@interface FCRawFileDataProvider : NSObject <FCAssetDataProvider>



@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *filePath; // ivar: _filePath
@property (readonly, nonatomic) FCInterestToken *holdToken; // ivar: _holdToken
@property (readonly, nonatomic) BOOL isRawFileConsumable; // ivar: _isRawFileConsumable


-(id)init;
-(id)initWithFilePath:(id)arg0 ;
-(id)initWithFilePath:(id)arg0 holdToken:(id)arg1 ;


@end


#endif