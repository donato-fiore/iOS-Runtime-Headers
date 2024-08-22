// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15PROXIMITYREADER15INTERNALOPTIONS_H
#define _TTC15PROXIMITYREADER15INTERNALOPTIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC15ProximityReader15InternalOptions : NSObject <NSSecureCoding>

 {
    ? returnReadResultImmediately;
    ? includeErrorInReadResult;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif