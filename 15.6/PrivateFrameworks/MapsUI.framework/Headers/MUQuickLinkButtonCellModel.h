// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUQUICKLINKBUTTONCELLMODEL_H
#define MUQUICKLINKBUTTONCELLMODEL_H

@class NSString, GEOQuickLink;
@protocol MUDynamicButtonCellModel, MUDynamicButtonCellModelChangeDelegate;

#import <Foundation/Foundation.h>


@interface MUQuickLinkButtonCellModel : NSObject <MUDynamicButtonCellModel>

 {
    NSString *_cachedSubtitle;
    BOOL _didLoad;
    GEOQuickLink *_quickLink;
}


@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (readonly, nonatomic) NSInteger actionStyle;
@property (weak, nonatomic) NSObject<MUDynamicButtonCellModelChangeDelegate> *changeDelegate; // ivar: _changeDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *titleString;


-(id)initWithQuickLink:(id)arg0 ;
-(int)analyticAction;
-(void)_completeWithSubtitle:(id)arg0 completion:(id)arg1 ;
-(void)_loadAppClipWithCompletion:(id)arg0 ;
-(void)_loadQuickLinkWithCompletion:(id)arg0 ;
-(void)loadSubtitleWithCompletion:(id)arg0 ;


@end


#endif