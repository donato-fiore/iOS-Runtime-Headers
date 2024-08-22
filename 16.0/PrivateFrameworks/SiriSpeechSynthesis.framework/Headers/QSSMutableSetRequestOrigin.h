// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLESETREQUESTORIGIN_H
#define QSSMUTABLESETREQUESTORIGIN_H



#import "QSSSetRequestOrigin.h"

@interface QSSMutableSetRequestOrigin : QSSSetRequestOrigin

@property (nonatomic) BOOL enable_geo_location_features;
@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat longitude;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif