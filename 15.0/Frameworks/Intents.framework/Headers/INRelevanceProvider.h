// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INRELEVANCEPROVIDER_H
#define INRELEVANCEPROVIDER_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INRelevanceProvider : NSObject <NSCopying, NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif