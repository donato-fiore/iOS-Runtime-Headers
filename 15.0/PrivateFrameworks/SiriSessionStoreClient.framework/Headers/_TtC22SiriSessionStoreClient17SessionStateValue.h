// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC22SIRISESSIONSTORECLIENT17SESSIONSTATEVALUE_H
#define _TTC22SIRISESSIONSTORECLIENT17SESSIONSTATEVALUE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC22SiriSessionStoreClient17SessionStateValue : NSObject <NSSecureCoding, NSCopying>

 {
    ? value;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif