// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFREQUESTPARAMETERS_H
#define SFREQUESTPARAMETERS_H

@class NSString, NSURL, NSArray, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFRequestParameters : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (copy, nonatomic) NSString *applicationVersion; // ivar: _applicationVersion
@property (nonatomic) BOOL detectMultipleUtterances; // ivar: _detectMultipleUtterances
@property (copy, nonatomic) NSURL *dynamicLanguageModel; // ivar: _dynamicLanguageModel
@property (copy, nonatomic) NSURL *dynamicVocabulary; // ivar: _dynamicVocabulary
@property (nonatomic) BOOL enableAutoPunctuation; // ivar: _enableAutoPunctuation
@property (copy, nonatomic) NSArray *inlineItemList; // ivar: _inlineItemList
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) CGFloat maximumRecognitionDuration; // ivar: _maximumRecognitionDuration
@property (copy, nonatomic) NSURL *modelOverrideURL; // ivar: _modelOverrideURL
@property (nonatomic) BOOL narrowband; // ivar: _narrowband
@property (nonatomic) BOOL onDeviceOnly; // ivar: _onDeviceOnly
@property (copy, nonatomic) NSDictionary *recognitionOverrides; // ivar: _recognitionOverrides
@property (copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (copy, nonatomic) NSString *task; // ivar: _task
@property (copy, nonatomic) NSString *taskIdentifier; // ivar: _taskIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif