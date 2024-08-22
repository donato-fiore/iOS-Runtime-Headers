// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKERRORBOX_H
#define CRKERRORBOX_H

@class NSDictionary, NSError;
@protocol CRKDictionaryCodable;

#import <Foundation/Foundation.h>


@interface CRKErrorBox : NSObject <CRKDictionaryCodable>



@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSError *error; // ivar: _error


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithError:(id)arg0 ;


@end


#endif