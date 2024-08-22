// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFPATTERNMODEL_H
#define SFPATTERNMODEL_H

@class NSString, NSDictionary, NSData;
@protocol SFPatternModel, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFPatternModel : NSObject <SFPatternModel, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *pattern_bundle_id; // ivar: _pattern_bundle_id
@property (copy, nonatomic) NSString *pattern_id; // ivar: _pattern_id
@property (copy, nonatomic) NSData *pattern_parameters; // ivar: _pattern_parameters
@property (copy, nonatomic) NSString *pattern_template_directory; // ivar: _pattern_template_directory
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif