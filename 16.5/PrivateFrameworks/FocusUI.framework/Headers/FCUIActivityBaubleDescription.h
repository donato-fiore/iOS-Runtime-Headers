// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCUIACTIVITYBAUBLEDESCRIPTION_H
#define FCUIACTIVITYBAUBLEDESCRIPTION_H

@class NSString, UIColor;
@protocol FCUIActivityBaubleDescribing;

#import <Foundation/Foundation.h>


@interface FCUIActivityBaubleDescription : NSObject <FCUIActivityBaubleDescribing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *systemImageName; // ivar: _systemImageName
@property (readonly, copy, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(id)completeDescriptionWithReferencePointSize:(CGFloat)arg0 maximumPointSize:(CGFloat)arg1 referenceDimension:(CGFloat)arg2 ;
-(id)initWithActivityDescription:(id)arg0 ;
-(id)initWithSystemImageName:(id)arg0 tintColor:(id)arg1 ;


@end


#endif