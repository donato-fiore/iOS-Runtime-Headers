// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSRATINGSSTOREFRONT_H
#define AMSRATINGSSTOREFRONT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface AMSRatingsStoreFront : NSObject

@property (readonly, nonatomic) NSString *defaultLanguage; // ivar: _defaultLanguage
@property (readonly, nonatomic) NSUInteger mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *ratingSystems; // ivar: _ratingSystems
@property (readonly, nonatomic) NSString *storeFront; // ivar: _storeFront
@property (readonly, nonatomic) NSString *storeFrontID; // ivar: _storeFrontID
@property (readonly, nonatomic) NSArray *supportedLanguages; // ivar: _supportedLanguages


+(id)storeFrontWithDictionary:(id)arg0 mediaType:(NSUInteger)arg1 ;
+(id)storeFrontWithDictionary:(id)arg0 mediaType:(NSUInteger)arg1 andStoreFront:(id)arg2 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 mediaType:(NSUInteger)arg1 ;
-(id)initWithDictionary:(id)arg0 mediaType:(NSUInteger)arg1 andStoreFront:(id)arg2 ;


@end


#endif