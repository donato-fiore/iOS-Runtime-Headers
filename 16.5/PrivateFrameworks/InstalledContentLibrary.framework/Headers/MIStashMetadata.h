// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MISTASHMETADATA_H
#define MISTASHMETADATA_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MIStashMetadata : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDate *dateOriginallyInstalled; // ivar: _dateOriginallyInstalled
@property (retain, nonatomic) NSDate *dateStashed; // ivar: _dateStashed


+(BOOL)supportsSecureCoding;
+(id)metadataFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)serializeToURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif