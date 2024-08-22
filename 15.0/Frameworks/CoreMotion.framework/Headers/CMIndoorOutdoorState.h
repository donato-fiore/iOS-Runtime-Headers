// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMINDOOROUTDOORSTATE_H
#define CMINDOOROUTDOORSTATE_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMIndoorOutdoorState : NSObject <NSSecureCoding, NSCopying>

 {
    NSDate *fStartDate;
    NSInteger fType;
    NSInteger fConfidence;
}


@property (readonly, nonatomic) NSInteger confidence;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 type:(NSInteger)arg1 confidence:(NSInteger)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif