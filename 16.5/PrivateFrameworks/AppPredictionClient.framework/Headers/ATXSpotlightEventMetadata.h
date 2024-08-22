// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSPOTLIGHTEVENTMETADATA_H
#define ATXSPOTLIGHTEVENTMETADATA_H

@class NSNumber, NSString;
@protocol NSSecureCoding, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXSpotlightEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper>



@property (retain, nonatomic) NSNumber *didSearchDuringSession; // ivar: _didSearchDuringSession
@property (retain, nonatomic) NSString *engagedAppString; // ivar: _engagedAppString
@property (retain, nonatomic) NSString *queryAtEngagement; // ivar: _queryAtEngagement
@property (retain, nonatomic) NSNumber *searchEngagedActionType; // ivar: _searchEngagedActionType
@property (retain, nonatomic) NSString *searchEngagedBundleId; // ivar: _searchEngagedBundleId


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXSpotlightEventMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithQueryAtEngagement:(id)arg0 engagedAppString:(id)arg1 didSearchDuringSession:(id)arg2 searchEngagedBundleId:(id)arg3 searchEngagedActionType:(id)arg4 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif