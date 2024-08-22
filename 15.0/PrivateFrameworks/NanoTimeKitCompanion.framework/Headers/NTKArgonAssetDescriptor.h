// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKARGONASSETDESCRIPTOR_H
#define NTKARGONASSETDESCRIPTOR_H

@class NSURL, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NTKArgonAssetDescriptor : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, nonatomic) NSString *fileName; // ivar: _fileName
@property (readonly, nonatomic) NSURL *fileURL;
@property (nonatomic) BOOL unlinkOnDealloc; // ivar: _unlinkOnDealloc


+(BOOL)supportsSecureCoding;
+(id)assetDescriptorForBundle:(id)arg0 ;
+(id)defaultBaseURL;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileName:(id)arg0 ;
-(id)initWithFileName:(id)arg0 baseURL:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif