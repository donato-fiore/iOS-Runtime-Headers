// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTEMPORALCLUSTER_H
#define PPTEMPORALCLUSTER_H

@class NSArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PPEvent.h"

@interface PPTemporalCluster : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *contactHandles; // ivar: _contactHandles
@property (readonly, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSArray *entities; // ivar: _entities
@property (readonly, nonatomic) PPEvent *event; // ivar: _event
@property (readonly, nonatomic) NSArray *locations; // ivar: _locations
@property (readonly, nonatomic) NSArray *mediaItems; // ivar: _mediaItems
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSArray *topics; // ivar: _topics


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)descriptionDateFormatter;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 score:(CGFloat)arg3 topics:(id)arg4 entities:(id)arg5 locations:(id)arg6 contacts:(id)arg7 contactHandles:(id)arg8 mediaItems:(id)arg9 ;
-(id)longDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif