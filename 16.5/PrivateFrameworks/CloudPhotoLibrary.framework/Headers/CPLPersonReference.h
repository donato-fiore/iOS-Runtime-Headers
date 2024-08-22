// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLPERSONREFERENCE_H
#define CPLPERSONREFERENCE_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying, CPLReference;

#import <Foundation/Foundation.h>


@interface CPLPersonReference : NSObject <NSSecureCoding, NSCopying, CPLReference>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *extraProperties; // ivar: _extraProperties
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *personIdentifier; // ivar: _personIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCPLArchiver:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedString:(id)arg0 ;
-(id)plistArchiveWithCPLArchiver:(id)arg0 ;
-(id)serializedString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif