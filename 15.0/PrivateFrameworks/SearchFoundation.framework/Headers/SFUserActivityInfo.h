// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFUSERACTIVITYINFO_H
#define SFUSERACTIVITYINFO_H

@class NSString, NSDictionary, NSData, NSURL;
@protocol SFUserActivityInfo, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFUserActivityInfo : NSObject <SFUserActivityInfo, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *urlValue; // ivar: _urlValue
@property (nonatomic) int valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
-(BOOL)hasValueType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif