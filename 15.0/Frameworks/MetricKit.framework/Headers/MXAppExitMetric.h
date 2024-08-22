// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXAPPEXITMETRIC_H
#define MXAPPEXITMETRIC_H



#import "MXMetric.h"
#import "MXBackgroundExitData.h"
#import "MXForegroundExitData.h"

@interface MXAppExitMetric : MXMetric

@property (readonly) MXBackgroundExitData *backgroundExitData; // ivar: _backgroundExitData
@property (readonly) MXForegroundExitData *foregroundExitData; // ivar: _foregroundExitData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithForegroundExitData:(id)arg0 backgroundExitData:(id)arg1 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif