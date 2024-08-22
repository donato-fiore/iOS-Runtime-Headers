// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFEXPERIMENTSERVERCONFIGURATIONINFO_H
#define AFEXPERIMENTSERVERCONFIGURATIONINFO_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFExperimentServerConfigurationInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy, nonatomic) NSString *configurationIdentifier; // ivar: _configurationIdentifier
@property (readonly, copy, nonatomic) NSURL *configurationURL; // ivar: _configurationURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat maxTimeToSync; // ivar: _maxTimeToSync
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigurationIdentifier:(id)arg0 configurationURL:(id)arg1 maxTimeToSync:(CGFloat)arg2 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif