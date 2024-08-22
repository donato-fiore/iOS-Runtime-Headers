// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSEARCHINAPPCOMMAND_H
#define SFSEARCHINAPPCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFSearchInAppCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"
#import "SFTopic.h"

@interface SFSearchInAppCommand : SFCommand <SFSearchInAppCommand, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFTopic *normalizedTopic;
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif