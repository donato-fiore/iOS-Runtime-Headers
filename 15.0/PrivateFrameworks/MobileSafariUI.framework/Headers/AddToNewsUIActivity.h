// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADDTONEWSUIACTIVITY_H
#define ADDTONEWSUIACTIVITY_H

@class UIApplicationExtensionActivity;


#import "TabDocument.h"

@interface AddToNewsUIActivity : UIApplicationExtensionActivity

@property (retain, nonatomic) TabDocument *tabDocument; // ivar: _tabDocument


+(NSInteger)activityCategory;
+(id)activityWithTabDocument:(id)arg0 error:(*id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)init;
-(id)initWithApplicationExtension:(id)arg0 tabDocument:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif