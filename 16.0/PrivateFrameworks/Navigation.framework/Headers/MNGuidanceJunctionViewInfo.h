// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNGUIDANCEJUNCTIONVIEWINFO_H
#define MNGUIDANCEJUNCTIONVIEWINFO_H

@class NSArray, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNGuidanceJunctionViewInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *images; // ivar: _images
@property (readonly, nonatomic) NSUUID *uniqueID; // ivar: _uniqueID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 images:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif