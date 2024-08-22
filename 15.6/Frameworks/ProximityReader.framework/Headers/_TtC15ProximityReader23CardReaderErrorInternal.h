// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15PROXIMITYREADER23CARDREADERERRORINTERNAL_H
#define _TTC15PROXIMITYREADER23CARDREADERERRORINTERNAL_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC15ProximityReader23CardReaderErrorInternal : NSObject <NSSecureCoding>

 {
    ? code;
    ? userInfo;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif