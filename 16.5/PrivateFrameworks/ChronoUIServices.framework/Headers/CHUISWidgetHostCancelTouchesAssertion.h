// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHUISWIDGETHOSTCANCELTOUCHESASSERTION_H
#define CHUISWIDGETHOSTCANCELTOUCHESASSERTION_H

@class NSArray, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface CHUISWidgetHostCancelTouchesAssertion : NSObject <BSInvalidatable>



@property (readonly, copy, nonatomic) NSArray *assertions; // ivar: _assertions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly) Class superclass;


-(id)init;
-(id)initWithAssertions:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif