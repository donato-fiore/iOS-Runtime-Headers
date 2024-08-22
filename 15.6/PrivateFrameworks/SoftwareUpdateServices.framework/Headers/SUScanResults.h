// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCANRESULTS_H
#define SUSCANRESULTS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SUDescriptor.h"

@interface SUScanResults : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) SUDescriptor *alternateDescriptor; // ivar: _alternateDescriptor
@property (retain, nonatomic) SUDescriptor *preferredDescriptor; // ivar: _preferredDescriptor


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPreferredDescriptor:(id)arg0 alternateDescriptor:(id)arg1 ;
-(id)latestUpdate;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif