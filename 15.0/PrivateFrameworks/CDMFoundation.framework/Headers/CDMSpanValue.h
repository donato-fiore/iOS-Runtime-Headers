// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMSPANVALUE_H
#define CDMSPANVALUE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CDMSpanValue : NSObject

@property (readonly, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (nonatomic) NSInteger type; // ivar: _type


+(id)fromString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithStringValue:(id)arg0 ;
-(id)toDictionary;


@end


#endif