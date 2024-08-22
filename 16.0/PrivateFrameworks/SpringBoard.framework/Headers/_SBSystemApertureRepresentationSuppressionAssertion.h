// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBSYSTEMAPERTUREREPRESENTATIONSUPPRESSIONASSERTION_H
#define _SBSYSTEMAPERTUREREPRESENTATIONSUPPRESSIONASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface _SBSystemApertureRepresentationSuppressionAssertion : NSObject <BSInvalidatable>

 {
    id *_invalidationBlock;
    BOOL _coverSheetVisible;
    BOOL _suppressForSystemChromeSuppression;
}


@property (nonatomic, getter=_isValid, setter=_setValid:) BOOL _valid; // ivar: __valid
@property (readonly, nonatomic, getter=isCoverSheetVisible) BOOL coverSheetVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressForSystemChromeSuppression;


-(id)initWithCoverSheetVisible:(BOOL)arg0 suppressForSystemChromeSuppression:(BOOL)arg1 invalidationBlock:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif