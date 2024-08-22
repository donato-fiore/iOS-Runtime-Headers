// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSPEECHTESTREQUESTOPTIONS_H
#define AFSPEECHTESTREQUESTOPTIONS_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSpeechTestRequestOptions : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *jitContext; // ivar: _jitContext
@property (readonly, copy, nonatomic) NSString *overrideModelPath; // ivar: _overrideModelPath


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJitContext:(id)arg0 overrideModelPath:(id)arg1 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif