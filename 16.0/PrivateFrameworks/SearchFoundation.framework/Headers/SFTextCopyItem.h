// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFTEXTCOPYITEM_H
#define SFTEXTCOPYITEM_H

@class NSString, NSDictionary, NSData;
@protocol SFTextCopyItem, NSSecureCoding, NSCopying;


#import "SFCopyItem.h"

@interface SFTextCopyItem : SFCopyItem <SFTextCopyItem, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *copyableString; // ivar: _copyableString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif