// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMLOCATIONUPDATESENTITEM_H
#define IMLOCATIONUPDATESENTITEM_H

@class NSString;
@protocol NSSecureCoding, NSCopying, IMRemoteObjectCoding;


#import "IMItem.h"

@interface IMLocationUpdateSentItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>



@property (retain, nonatomic) NSString *otherCountryCode; // ivar: _otherCountryCode
@property (retain, nonatomic) NSString *otherHandle; // ivar: _otherHandle
@property (retain, nonatomic) NSString *otherUnformattedID; // ivar: _otherUnformattedID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif