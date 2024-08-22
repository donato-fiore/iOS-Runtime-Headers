// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC22SIRISESSIONSTORECLIENT14SESSIONSTATEID_H
#define _TTC22SIRISESSIONSTORECLIENT14SESSIONSTATEID_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC22SiriSessionStoreClient14SessionStateId : NSObject <NSSecureCoding>

 {
    ? assistantId;
    ? deviceId;
    ? userId;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif