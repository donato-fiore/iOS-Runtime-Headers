// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKEVENT_H
#define CKEVENT_H

@class NSDate, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CKEvent : NSObject

@property (readonly, retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)initWithIdentifier:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 metadata:(id)arg3 ;


@end


#endif