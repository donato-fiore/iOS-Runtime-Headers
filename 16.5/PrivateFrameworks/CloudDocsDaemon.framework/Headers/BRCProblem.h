// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCPROBLEM_H
#define BRCPROBLEM_H

@class NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BRCProblem : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSSet *effectedRecordNames; // ivar: _effectedRecordNames
@property (readonly, nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProblem:(id)arg0 ;
-(id)initWithType:(int)arg0 recordName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithProblem:(id)arg0 ;


@end


#endif