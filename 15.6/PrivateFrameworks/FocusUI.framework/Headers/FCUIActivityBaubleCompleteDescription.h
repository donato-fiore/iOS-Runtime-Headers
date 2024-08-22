// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCUIACTIVITYBAUBLECOMPLETEDESCRIPTION_H
#define FCUIACTIVITYBAUBLECOMPLETEDESCRIPTION_H

@class NSString;
@protocol FCUIActivityBaubleLayoutDescribing;


#import "FCUIActivityBaubleDescription.h"

@interface FCUIActivityBaubleCompleteDescription : FCUIActivityBaubleDescription <FCUIActivityBaubleLayoutDescribing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat maximumPointSize; // ivar: _maximumPointSize
@property (readonly, nonatomic) CGFloat referenceDimension; // ivar: _referenceDimension
@property (readonly, nonatomic) CGFloat referencePointSize; // ivar: _referencePointSize
@property (readonly) Class superclass;


-(id)initWithActivityDescription:(id)arg0 referencePointSize:(CGFloat)arg1 maximumPointSize:(CGFloat)arg2 referenceDimension:(CGFloat)arg3 ;
-(id)initWithSystemImageName:(id)arg0 tintColor:(id)arg1 referencePointSize:(CGFloat)arg2 maximumPointSize:(CGFloat)arg3 referenceDimension:(CGFloat)arg4 ;


@end


#endif