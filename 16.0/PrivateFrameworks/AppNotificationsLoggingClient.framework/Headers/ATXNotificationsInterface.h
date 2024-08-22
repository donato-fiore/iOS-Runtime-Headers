// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONSINTERFACE_H
#define ATXNOTIFICATIONSINTERFACE_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXNotificationsInterface : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger feed; // ivar: _feed
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) NSUInteger numSuppActions; // ivar: _numSuppActions
@property (retain, nonatomic) NSDate *publicationDate; // ivar: _publicationDate
@property (retain, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *topic; // ivar: _topic


+(BOOL)supportsSecureCoding;
+(NSUInteger)getFeedFromMetadata:(id)arg0 ;
+(id)createArchivedMetadata:(id)arg0 categoryId:(id)arg1 title:(id)arg2 subtitle:(id)arg3 message:(id)arg4 numSuppActions:(id)arg5 feed:(NSUInteger)arg6 ;
+(id)getBundleIdFromMetadata:(id)arg0 ;
+(id)getMessageFromMetadata:(id)arg0 ;
+(id)getNumSuppActionsFromMetadata:(id)arg0 ;
+(id)getSubtitleFromMetadata:(id)arg0 ;
+(id)getTimezoneFromMetadata:(id)arg0 ;
+(id)getTitleFromMetadata:(id)arg0 ;
+(id)getTopicFromMetadata:(id)arg0 ;
+(void)stripContentInMetadata:(id)arg0 ;
-(id)extractMetadata;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif