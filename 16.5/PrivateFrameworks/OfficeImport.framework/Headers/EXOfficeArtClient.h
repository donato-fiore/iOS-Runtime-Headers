// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXOFFICEARTCLIENT_H
#define EXOFFICEARTCLIENT_H



#import "OAXClient.h"

@interface EXOfficeArtClient : OAXClient

@property BOOL autoChartFillIsHollow; // ivar: mAutoChartFillIsHollow
@property BOOL autoChartStrokeIsHollow; // ivar: mAutoChartStrokeIsHollow


-(?)readClientDataFromNode:(?)arg0 toDrawablestate;
-(BOOL)chartAutoFillIsHollow;
-(BOOL)chartAutoStrokeIsHollow;


@end


#endif