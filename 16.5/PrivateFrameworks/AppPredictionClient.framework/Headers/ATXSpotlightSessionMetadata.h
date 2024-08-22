// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSPOTLIGHTSESSIONMETADATA_H
#define ATXSPOTLIGHTSESSIONMETADATA_H

@class NSString;
@protocol ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol;

#import <Foundation/Foundation.h>


@interface ATXSpotlightSessionMetadata : NSObject <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol>



@property (nonatomic) unsigned char actionConsumerSubType; // ivar: _actionConsumerSubType
@property (nonatomic) unsigned char appConsumerSubType; // ivar: _appConsumerSubType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSearchDuringSession; // ivar: _didSearchDuringSession
@property (retain, nonatomic) NSString *engagedAppString; // ivar: _engagedAppString
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXSpotlightSessionMetadata:(id)arg0 ;
-(id)init;
-(id)initWithAppConsumerSubType:(unsigned char)arg0 actionConsumerSubType:(unsigned char)arg1 ;
-(id)initWithAppConsumerSubType:(unsigned char)arg0 actionConsumerSubType:(unsigned char)arg1 engagedAppString:(id)arg2 didSearchDuringSession:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif