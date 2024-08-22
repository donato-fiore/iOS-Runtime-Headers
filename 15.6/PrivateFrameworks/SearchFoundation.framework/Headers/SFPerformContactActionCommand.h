// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPERFORMCONTACTACTIONCOMMAND_H
#define SFPERFORMCONTACTACTIONCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFPerformContactActionCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"

@interface SFPerformContactActionCommand : SFCommand <SFPerformContactActionCommand, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *commandDetail;
@property (nonatomic) int contactActionType; // ivar: _contactActionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL didDisplayHandleOptions; // ivar: _didDisplayHandleOptions
@property (nonatomic) BOOL didSelectFromOptionsMenu; // ivar: _didSelectFromOptionsMenu
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasContactActionType;
-(BOOL)hasDidDisplayHandleOptions;
-(BOOL)hasDidSelectFromOptionsMenu;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif