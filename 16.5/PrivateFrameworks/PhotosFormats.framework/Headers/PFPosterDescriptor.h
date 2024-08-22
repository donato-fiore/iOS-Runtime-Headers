// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFPOSTERDESCRIPTOR_H
#define PFPOSTERDESCRIPTOR_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PFPosterShuffleConfiguration.h"

@interface PFPosterDescriptor : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger descriptorType; // ivar: _descriptorType
@property (retain, nonatomic) NSString *displayNameLocalizationKey; // ivar: _displayNameLocalizationKey
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isBlankTemplate;
@property (readonly, nonatomic) NSArray *media; // ivar: _media
@property (readonly, nonatomic) NSInteger posterType;
@property (retain, nonatomic) PFPosterShuffleConfiguration *shuffleConfiguration; // ivar: _shuffleConfiguration
@property (retain, nonatomic) NSString *styleCategory; // ivar: _styleCategory
@property (nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(NSInteger)descriptorTypeFromTypeString:(id)arg0 ;
+(id)descriptorIdentifierForDescriptorType:(NSInteger)arg0 uuids:(id)arg1 ;
+(id)descriptorTypeStringWithType:(NSInteger)arg0 ;
+(id)loadFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)saveToURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescriptorType:(NSInteger)arg0 media:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif