// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSUIAPPCONTROLLER_H
#define TPSUIAPPCONTROLLER_H

@class TPSAppController;



@interface TPSUIAppController : TPSAppController {
    ? syncQueue;
    ? attributedStringCache;
}




-(id)assetConfigurationForAssets:(id)arg0 language:(id)arg1 sizeClass:(NSInteger)arg2 style:(NSInteger)arg3 ;
-(id)attributedStringForIdentifier:(id)arg0 ;
-(id)init;
-(void)contentWillUpdate;
-(void)resetAttributedStringCache;
-(void)updateAttributedString:(id)arg0 forIdentifier:(id)arg1 ;


@end


#endif