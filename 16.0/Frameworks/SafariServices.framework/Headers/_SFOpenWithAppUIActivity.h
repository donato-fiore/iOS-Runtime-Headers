// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFOPENWITHAPPUIACTIVITY_H
#define _SFOPENWITHAPPUIACTIVITY_H

@class UIActivity, LSApplicationProxy, NSString;
@protocol LSOpenResourceOperationDelegate;



@interface _SFOpenWithAppUIActivity : UIActivity <LSOpenResourceOperationDelegate>

 {
    LSApplicationProxy *_appProxy;
    NSString *_filePath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)initWithApplicationIdentifier:(id)arg0 andFilePath:(id)arg1 ;
-(void)openResourceOperation:(id)arg0 didFinishCopyingResource:(id)arg1 ;
-(void)performActivity;


@end


#endif