// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _IMBALLOONBUNDLEAPP_H
#define _IMBALLOONBUNDLEAPP_H



#import "IMBalloonApp.h"

@interface _IMBalloonBundleApp : IMBalloonApp {
    Class _bubbleClass;
    Class _browserClass;
    Class _dataSourceClass;
}




-(Class)browserClass;
-(Class)bubbleClass;
-(Class)dataSourceClass;
-(id)initWithPluginBundle:(id)arg0 appBundle:(id)arg1 ;
-(void)_loadAppBundle;
-(void)_loadBundle;
-(void)setBrowserClass:(Class)arg0 ;
-(void)setBubbleClass:(Class)arg0 ;
-(void)setDataSourceClass:(Class)arg0 ;


@end


#endif