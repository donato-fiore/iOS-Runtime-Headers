// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITORLOOKSWITCHINGASSERTION_H
#define PREDITORLOOKSWITCHINGASSERTION_H

@class NSString;
@protocol PRInvalidatable;

#import <Foundation/Foundation.h>

#import "PREditor.h"

@interface PREditorLookSwitchingAssertion : NSObject <PRInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) PREditor *editor; // ivar: _editor
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)initWithEditor:(id)arg0 reason:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif