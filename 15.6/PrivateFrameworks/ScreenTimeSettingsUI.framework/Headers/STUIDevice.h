// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STUIDEVICE_H
#define STUIDEVICE_H

@class NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface STUIDevice : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDate *lastFamilyCheckinDate; // ivar: _lastFamilyCheckinDate
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) short platform; // ivar: _platform


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 identifier:(id)arg1 platform:(short)arg2 lastFamilyCheckinDate:(id)arg3 ;


@end


#endif