// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGEVENTMETADATA_H
#define SGEVENTMETADATA_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SGEventMetadata : NSObject

@property (readonly, nonatomic) NSString *categoryDescription; // ivar: _categoryDescription
@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) NSArray *eventActivities; // ivar: _eventActivities
@property (readonly, nonatomic) NSString *originBundleId; // ivar: _originBundleId
@property (readonly, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly, nonatomic) NSArray *schemaOrg; // ivar: _schemaOrg
@property (readonly, nonatomic) unsigned char type; // ivar: _type


+(id)describeType:(unsigned char)arg0 ;
+(id)eventMetadataFromEKEvent:(id)arg0 ;
+(unsigned char)eventTypeFromString:(id)arg0 ;
-(id)initWithType:(unsigned char)arg0 categoryDescription:(id)arg1 originBundleId:(id)arg2 confidence:(CGFloat)arg3 schemaOrg:(id)arg4 participants:(id)arg5 ;
-(id)initWithType:(unsigned char)arg0 categoryDescription:(id)arg1 originBundleId:(id)arg2 confidence:(CGFloat)arg3 schemaOrg:(id)arg4 participants:(id)arg5 eventActivities:(id)arg6 ;
-(id)jsonObject;
-(id)toJsonString;


@end


#endif