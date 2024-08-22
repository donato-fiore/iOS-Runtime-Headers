// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNDETECTSPEECHUTTERANCEREQUEST_H
#define SNDETECTSPEECHUTTERANCEREQUEST_H

@class NSString;
@protocol SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest;

#import <Foundation/Foundation.h>


@interface SNDetectSpeechUtteranceRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly) CGFloat decisionDelay;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger requestType; // ivar: _requestType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDetectSpeechUtteranceRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createAnalyzerWithError:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif