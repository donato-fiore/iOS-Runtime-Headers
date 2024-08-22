// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFIMAGEOPTION_H
#define SFIMAGEOPTION_H

@class NSString, NSDictionary, NSData;
@protocol SFImageOption, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFImageOption : NSObject <SFImageOption, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultValue; // ivar: _defaultValue
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif