// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKUIREMOTEVIEW_H
#define WKUIREMOTEVIEW_H

@class UIRemoteView, NSString;
@protocol WKContentControlled;



@interface WKUIRemoteView : UIRemoteView <WKContentControlled>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 pid:(int)arg1 contextID:(unsigned int)arg2 ;


@end


#endif