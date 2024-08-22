// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BLASTDOORLPIMAGEMETADATA_H
#define _BLASTDOORLPIMAGEMETADATA_H

@class NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _BlastDoorLPImageMetadata : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSString *accessibilityText; // ivar: _accessibilityText
@property (nonatomic) CGSize size; // ivar: _size
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic) unsigned int version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithDictionary:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif