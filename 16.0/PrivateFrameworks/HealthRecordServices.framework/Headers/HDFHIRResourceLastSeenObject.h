// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDFHIRRESOURCELASTSEENOBJECT_H
#define HDFHIRRESOURCELASTSEENOBJECT_H

@class NSDate, HKFHIRIdentifier, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDFHIRResourceLastSeenObject : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *lastSeenDate; // ivar: _lastSeenDate
@property (readonly, copy, nonatomic) HKFHIRIdentifier *resourceIdentifier; // ivar: _resourceIdentifier
@property (readonly, copy, nonatomic) NSURL *sourceURL; // ivar: _sourceURL


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResourceIdentifier:(id)arg0 sourceURL:(id)arg1 lastSeenDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif