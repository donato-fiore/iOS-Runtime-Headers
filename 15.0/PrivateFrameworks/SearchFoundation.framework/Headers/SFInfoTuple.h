// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFINFOTUPLE_H
#define SFINFOTUPLE_H

@class NSString, NSDictionary, NSData, NSArray;
@protocol SFInfoTuple, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFInfoTuple : NSObject <SFInfoTuple, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger initiallyVisibleValues; // ivar: _initiallyVisibleValues
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *showMoreString; // ivar: _showMoreString
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *values; // ivar: _values


+(BOOL)supportsSecureCoding;
-(BOOL)hasInitiallyVisibleValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif