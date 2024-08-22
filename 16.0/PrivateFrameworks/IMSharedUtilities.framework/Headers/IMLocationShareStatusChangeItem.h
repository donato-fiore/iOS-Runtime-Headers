// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMLOCATIONSHARESTATUSCHANGEITEM_H
#define IMLOCATIONSHARESTATUSCHANGEITEM_H

@class NSString;
@protocol NSSecureCoding, NSCopying, IMRemoteObjectCoding;


#import "IMItem.h"

@interface IMLocationShareStatusChangeItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>



@property (nonatomic) BOOL actionable; // ivar: _actionable
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) BOOL expired; // ivar: _expired
@property (retain, nonatomic) NSString *otherCountryCode; // ivar: _otherCountryCode
@property (retain, nonatomic) NSString *otherHandle; // ivar: _otherHandle
@property (retain, nonatomic) NSString *otherUnformattedID; // ivar: _otherUnformattedID
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLastMessageCandidate;
-(id)copyDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif