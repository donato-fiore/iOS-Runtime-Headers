// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKPREVIEWACTION_H
#define WKPREVIEWACTION_H

@class UIPreviewAction, NSString;
@protocol WKPreviewActionItem;



@interface WKPreviewAction : UIPreviewAction <WKPreviewActionItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


+(id)actionWithIdentifier:(id)arg0 title:(id)arg1 style:(NSInteger)arg2 handler:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif