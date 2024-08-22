// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LBLOCALSPEECHRECOGNITIONSETTINGS_H
#define LBLOCALSPEECHRECOGNITIONSETTINGS_H

@class NSString, NSArray, CLLocation;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LBLocalSpeechRecognitionSettings : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *inputOrigin; // ivar: _inputOrigin
@property (readonly, nonatomic) NSArray *jitGrammar; // ivar: _jitGrammar
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSString *overrideModelPath; // ivar: _overrideModelPath
@property (readonly, nonatomic) NSString *requestId; // ivar: _requestId
@property (readonly, nonatomic) NSUInteger speechRecognitionTask; // ivar: _speechRecognitionTask


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif