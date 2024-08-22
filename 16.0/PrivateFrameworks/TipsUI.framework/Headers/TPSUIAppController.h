// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSUIAPPCONTROLLER_H
#define TPSUIAPPCONTROLLER_H

@class TPSAppController;



@interface TPSUIAppController : TPSAppController {
    ? syncQueue;
    ? attributedStringCache;
    ? footnoteAttributedStringCache;
}


@property (nonatomic) BOOL viewNavigationCollapsed; // ivar: viewNavigationCollapsed


-(id)assetConfigurationForAssets:(id)arg0 language:(id)arg1 sizeClass:(NSInteger)arg2 style:(NSInteger)arg3 assetFileInfoManager:(id)arg4 ;
-(id)attributedStringForIdentifier:(id)arg0 ;
-(id)footNoteAttributedStringForIdentifier:(id)arg0 ;
-(id)init;
-(void)contentWillUpdate;
-(void)resetAttributedStringCache;
-(void)updateAttributedString:(id)arg0 forIdentifier:(id)arg1 ;
-(void)updateFootnoteAttributedString:(id)arg0 forIdentifier:(id)arg1 ;


@end


#endif