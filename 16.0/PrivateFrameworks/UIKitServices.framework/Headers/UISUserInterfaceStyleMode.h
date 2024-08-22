// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISUSERINTERFACESTYLEMODE_H
#define UISUSERINTERFACESTYLEMODE_H

@protocol UISUserInterfaceStyleModeDelegate;

#import <Foundation/Foundation.h>


@interface UISUserInterfaceStyleMode : NSObject {
    id<UISUserInterfaceStyleModeDelegate> *_delegate;
    BOOL _observingDefaults;
}


@property (nonatomic) ? customSchedule;
@property (nonatomic) NSInteger modeValue;
@property (nonatomic) ? override;
@property (readonly, nonatomic) NSInteger suggestedAutomaticModeValue;


-(id)_commonAnalyticsEventDictionary;
-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif