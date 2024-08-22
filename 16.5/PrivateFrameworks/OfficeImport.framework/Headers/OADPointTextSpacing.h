// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADPOINTTEXTSPACING_H
#define OADPOINTTEXTSPACING_H



#import "OADTextSpacing.h"

@interface OADPointTextSpacing : OADTextSpacing {
    int mPoints;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithPoints:(int)arg0 ;
-(int)points;


@end


#endif