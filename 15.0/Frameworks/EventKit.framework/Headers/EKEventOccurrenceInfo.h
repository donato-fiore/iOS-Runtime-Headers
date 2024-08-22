// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTOCCURRENCEINFO_H
#define EKEVENTOCCURRENCEINFO_H


#import <Foundation/Foundation.h>

#import "EKObjectID.h"

@interface EKEventOccurrenceInfo : NSObject

@property (nonatomic) CGFloat date; // ivar: _date
@property (retain, nonatomic) EKObjectID *objectID; // ivar: _objectID


-(id)description;
-(id)initWithObjectID:(id)arg0 date:(CGFloat)arg1 ;


@end


#endif