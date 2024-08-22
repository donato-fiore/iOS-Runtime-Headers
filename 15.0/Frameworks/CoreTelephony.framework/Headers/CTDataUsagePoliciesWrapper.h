// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTDATAUSAGEPOLICIESWRAPPER_H
#define CTDATAUSAGEPOLICIESWRAPPER_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTDataUsagePoliciesWrapper : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSSet *policies; // ivar: _policies


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif