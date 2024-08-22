// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCONTACTCOPYITEM_H
#define SFCONTACTCOPYITEM_H

@class NSURL, NSString, NSDictionary, NSData;
@protocol SFContactCopyItem, NSSecureCoding, NSCopying;


#import "SFCopyItem.h"
#import "SFPerson.h"

@interface SFContactCopyItem : SFCopyItem <SFContactCopyItem, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSURL *contactFileLocation; // ivar: _contactFileLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFPerson *person; // ivar: _person
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif