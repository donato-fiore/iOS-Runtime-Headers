// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONENTITYFEATURES_H
#define ATXNOTIFICATIONENTITYFEATURES_H

@class NSMutableArray;
@protocol ATXJSONSerializableProtocol;

#import <Foundation/Foundation.h>


@interface ATXNotificationEntityFeatures : NSObject <ATXJSONSerializableProtocol>



@property (retain, nonatomic) NSMutableArray *secondsToEngagement; // ivar: _secondsToEngagement


-(id)init;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;


@end


#endif