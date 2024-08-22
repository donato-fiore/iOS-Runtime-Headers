// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFBUTTONITEM_H
#define SFBUTTONITEM_H

@class NSString, NSDictionary, NSData;
@protocol SFButtonItem, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFButtonItem : NSObject <SFButtonItem, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger uniqueId; // ivar: _uniqueId


+(BOOL)supportsSecureCoding;
-(BOOL)hasUniqueId;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif