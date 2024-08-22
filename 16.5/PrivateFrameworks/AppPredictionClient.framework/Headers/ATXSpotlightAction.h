// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSPOTLIGHTACTION_H
#define ATXSPOTLIGHTACTION_H

@class NSString, SFTopic;
@protocol NSSecureCoding, ATXSuggestionExecutableProtocol;

#import <Foundation/Foundation.h>

#import "ATXActionCriteria.h"

@interface ATXSpotlightAction : NSObject <NSSecureCoding, ATXSuggestionExecutableProtocol>

 {
    ATXActionCriteria *_criteria;
}


@property (readonly, nonatomic) NSString *actionDescription; // ivar: _actionDescription
@property (readonly, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, nonatomic) ATXActionCriteria *criteria;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SFTopic *topic; // ivar: _topic


+(BOOL)supportsSecureCoding;
+(id)_contactSuggestionResultWithId:(id)arg0 title:(id)arg1 ;
+(id)_searchSuggestionResultWithString:(id)arg0 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactName:(id)arg0 contactEmail:(id)arg1 subtitle:(id)arg2 criteria:(id)arg3 ;
-(id)initWithContactName:(id)arg0 contactIdentifier:(id)arg1 subtitle:(id)arg2 criteria:(id)arg3 ;
-(id)initWithFlightCode:(id)arg0 date:(id)arg1 criteria:(id)arg2 ;
-(id)initWithMediaName:(id)arg0 identifier:(id)arg1 criteria:(id)arg2 ;
-(id)initWithPOIName:(id)arg0 muid:(id)arg1 criteria:(id)arg2 ;
-(id)initWithSearchString:(id)arg0 ;
-(id)initWithTopic:(id)arg0 criteria:(id)arg1 actionDescription:(id)arg2 actionIdentifier:(id)arg3 ;
-(id)initWithWeatherLocation:(id)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 criteria:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif