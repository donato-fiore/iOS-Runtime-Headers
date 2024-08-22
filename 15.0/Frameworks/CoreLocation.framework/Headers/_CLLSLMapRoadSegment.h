// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CLLSLMAPROADSEGMENT_H
#define _CLLSLMAPROADSEGMENT_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CLLSLMapRoadSegment : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *polylines; // ivar: _polylines
@property (nonatomic) NSUInteger roadID; // ivar: _roadID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithMemberIndent:(id)arg0 endIndent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif