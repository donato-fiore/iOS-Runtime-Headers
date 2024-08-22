// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MESSAGEACTIVITYVIEWCONTROLLER_H
#define MESSAGEACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController;



@interface MessageActivityViewController : UIActivityViewController {
    BOOL _sourceIsManaged;
}


@property (nonatomic) BOOL sourceIsManaged;


-(id)initWithActivityItems:(id)arg0 applicationActivities:(id)arg1 ;


@end


#endif