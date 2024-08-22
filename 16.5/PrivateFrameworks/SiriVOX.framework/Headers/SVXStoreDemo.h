// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSTOREDEMO_H
#define SVXSTOREDEMO_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SVXStoreDemo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger gender; // ivar: _gender
@property (readonly, copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (readonly, nonatomic) float outputVolume; // ivar: _outputVolume
@property (readonly, nonatomic) NSInteger transcriptID; // ivar: _transcriptID


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTranscriptID:(NSInteger)arg0 languageCode:(id)arg1 gender:(NSInteger)arg2 outputVolume:(float)arg3 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif