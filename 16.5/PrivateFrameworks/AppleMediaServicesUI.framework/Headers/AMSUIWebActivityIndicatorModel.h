// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBACTIVITYINDICATORMODEL_H
#define AMSUIWEBACTIVITYINDICATORMODEL_H

@class NSString;
@protocol AMSUIWebModelInterface;

#import <Foundation/Foundation.h>


@interface AMSUIWebActivityIndicatorModel : NSObject <AMSUIWebModelInterface>



@property (nonatomic) BOOL animate; // ivar: _animate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;


@end


#endif