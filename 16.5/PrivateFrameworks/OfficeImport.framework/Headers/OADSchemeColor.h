// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADSCHEMECOLOR_H
#define OADSCHEMECOLOR_H



#import "OADColor.h"

@interface OADSchemeColor : OADColor {
    int mIndex;
}




+(id)schemeColorWithIndex:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSchemeColorIndex:(int)arg0 ;
-(int)schemeColorIndex;


@end


#endif