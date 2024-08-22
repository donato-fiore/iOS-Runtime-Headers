// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSETAUDIOSESSIONACTIVERESULT_H
#define AFSETAUDIOSESSIONACTIVERESULT_H

@class NSError;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSetAudioSessionActiveResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAudioSessionID:(unsigned int)arg0 error:(id)arg1 ;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif