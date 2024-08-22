// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSPORTSTEAM_H
#define SFSPORTSTEAM_H

@class NSString, NSDictionary, NSData;
@protocol SFSportsTeam, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFImage.h"

@interface SFSportsTeam : NSObject <SFSportsTeam, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *accessibilityDescription; // ivar: _accessibilityDescription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFImage *logo; // ivar: _logo
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *record; // ivar: _record
@property (copy, nonatomic) NSString *score; // ivar: _score
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif