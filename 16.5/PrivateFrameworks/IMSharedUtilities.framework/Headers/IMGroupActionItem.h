// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMGROUPACTIONITEM_H
#define IMGROUPACTIONITEM_H

@class NSString;
@protocol NSSecureCoding, NSCopying, IMRemoteObjectCoding;


#import "IMItem.h"

@interface IMGroupActionItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>



@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (retain, nonatomic) NSString *otherCountryCode; // ivar: _otherCountryCode
@property (retain, nonatomic) NSString *otherHandle; // ivar: _otherHandle
@property (retain, nonatomic) NSString *otherUnformattedID; // ivar: _otherUnformattedID


+(BOOL)supportsSecureCoding;
-(BOOL)actionIsGroupPhoto;
-(BOOL)isCompatibleWithMiC;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fileTransferGUIDs;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif