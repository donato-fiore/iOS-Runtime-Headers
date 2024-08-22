// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIUSERMODELCOUNTER_H
#define TIUSERMODELCOUNTER_H

@class NSNumber, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface TIUserModelCounter : NSObject {
    NSUInteger _persisted;
    NSUInteger _current;
}


@property (readonly, nonatomic) NSNumber *count;
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSDate *lastUpdateDate; // ivar: _lastUpdateDate
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 initialCount:(id)arg1 creationDate:(id)arg2 lastUpdateDate:(id)arg3 ;
-(void)add:(int)arg0 ;
-(void)doPersist:(id)arg0 forDate:(id)arg1 ;


@end


#endif