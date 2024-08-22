// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXAPPDIRECTORYSESSIONMETADATA_H
#define ATXAPPDIRECTORYSESSIONMETADATA_H

@class NSString, NSNumber;
@protocol ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol;

#import <Foundation/Foundation.h>


@interface ATXAppDirectorySessionMetadata : NSObject <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSearchDuringSession; // ivar: _didSearchDuringSession
@property (retain, nonatomic) NSString *engagedBundleId; // ivar: _engagedBundleId
@property (retain, nonatomic) NSNumber *engagedBundleIdInTopAppsVisible; // ivar: _engagedBundleIdInTopAppsVisible
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXAppDirectorySessionMetadata:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEngagedBundleId:(id)arg0 engagedBundleIdInTopAppsVisible:(id)arg1 didSearchDuringSession:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif