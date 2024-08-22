// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUBPROGRESS_H
#define SUBPROGRESS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUBProgress : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat estimatedTimeRemaining; // ivar: _estimatedTimeRemaining
@property (nonatomic) BOOL isDone; // ivar: _isDone
@property (retain, nonatomic) NSString *phase; // ivar: _phase
@property (nonatomic) float portionComplete; // ivar: _portionComplete


+(BOOL)supportsSecureCoding;
-(id)copy;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif