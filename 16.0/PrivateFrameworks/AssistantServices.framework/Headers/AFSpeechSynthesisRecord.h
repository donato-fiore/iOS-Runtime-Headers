// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSPEECHSYNTHESISRECORD_H
#define AFSPEECHSYNTHESISRECORD_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSpeechSynthesisRecord : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger beginTimestamp; // ivar: _beginTimestamp
@property (readonly, nonatomic) NSUInteger endTimestamp; // ivar: _endTimestamp
@property (readonly, copy, nonatomic) NSString *utterance; // ivar: _utterance


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
-(id)initWithUtterance:(id)arg0 beginTimestamp:(NSUInteger)arg1 endTimestamp:(NSUInteger)arg2 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif