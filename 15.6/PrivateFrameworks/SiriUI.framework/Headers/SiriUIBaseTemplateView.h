// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUIBASETEMPLATEVIEW_H
#define SIRIUIBASETEMPLATEVIEW_H

@class UIView, NSString;
@protocol SiriUITemplateView, SiriUITemplateModel, SiriUITemplatedView;



@interface SiriUIBaseTemplateView : UIView <SiriUITemplateView>



@property (weak, nonatomic) NSObject<SiriUITemplateModel> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<SiriUITemplatedView> *templatedSuperview; // ivar: _templatedSuperview


-(CGFloat)desiredHeight;
-(id)initWithDataSource:(id)arg0 ;
-(void)reloadData;
-(void)removeFromTemplatedSuperview;


@end


#endif