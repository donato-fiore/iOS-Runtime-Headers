// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WCAKEYVALUEITEM_H
#define WCAKEYVALUEITEM_H

@class NSArray, NSData, NSDictionary, NSError, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WCAKeyValueItem : NSObject <NSSecureCoding>

 {
    id *_value;
}


@property (readonly, nonatomic) NSArray *arrayValue;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) NSData *bytesValue;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) CGFloat doubleValue;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) float floatValue;
@property (readonly, nonatomic) int int32Value;
@property (readonly, nonatomic) NSInteger int64Value;
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) unsigned int uint32Value;
@property (readonly, nonatomic) NSUInteger uint64Value;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 error:(id)arg1 ;
-(id)initWithKey:(id)arg0 value:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif