// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15PROXIMITYREADER21VASRESULTARRAYWRAPPER_H
#define _TTC15PROXIMITYREADER21VASRESULTARRAYWRAPPER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC15ProximityReader21VASResultArrayWrapper : NSObject <NSSecureCoding>

 {
    ? vasEntries;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif