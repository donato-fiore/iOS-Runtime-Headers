// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKONTOLOGYEDUCATIONCONTENTSECTIONDATA_H
#define HKONTOLOGYEDUCATIONCONTENTSECTIONDATA_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKOntologyEducationContentSectionData : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) BOOL deleted; // ivar: _deleted
@property (readonly, nonatomic) NSInteger sectionDataType; // ivar: _sectionDataType
@property (readonly, copy, nonatomic) NSArray *stringValues; // ivar: _stringValues
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStringValues:(id)arg0 sectionDataType:(NSInteger)arg1 version:(NSInteger)arg2 timestamp:(CGFloat)arg3 deleted:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif