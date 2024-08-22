// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPENTITY_H
#define CPENTITY_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPEntity : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)objectForIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif