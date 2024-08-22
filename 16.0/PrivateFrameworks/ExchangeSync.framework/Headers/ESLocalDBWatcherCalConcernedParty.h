// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESLOCALDBWATCHERCALCONCERNEDPARTY_H
#define ESLOCALDBWATCHERCALCONCERNEDPARTY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ESLocalDBWatcherCalConcernedParty : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, weak, nonatomic) id *concernedParty; // ivar: _concernedParty


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithConcernedParty:(id)arg0 accountID:(id)arg1 ;


@end


#endif