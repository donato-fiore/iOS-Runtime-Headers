// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSTIMEINTERVAL_H
#define CLSTIMEINTERVAL_H

@class NSString, NSDate;
@protocol CLSRelationable;


#import "CLSObject.h"

@interface CLSTimeInterval : CLSObject <CLSRelationable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat length; // ivar: _length
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif