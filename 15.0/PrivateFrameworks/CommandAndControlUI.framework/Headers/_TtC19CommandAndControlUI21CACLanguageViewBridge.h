// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19COMMANDANDCONTROLUI21CACLANGUAGEVIEWBRIDGE_H
#define _TTC19COMMANDANDCONTROLUI21CACLANGUAGEVIEWBRIDGE_H

@protocol _TtP19CommandAndControlUI23CACLanguageViewDelegate_;

#import <Foundation/Foundation.h>


@interface _TtC19CommandAndControlUI21CACLanguageViewBridge : NSObject {
    ? model;
}


@property (nonatomic, retain) NSObject<_TtP19CommandAndControlUI23CACLanguageViewDelegate_> *delegate; // ivar: delegate


-(id)init;
-(id)makeLanguageUI;
-(id)makeLanguageUIWithLocales:(id)arg0 ;
-(void)setSelectedWithLanguageIdentifier:(id)arg0 ;
-(void)updateDownloadStatusWith:(id)arg0 ;
-(void)updateInstallationStatusWith:(id)arg0 ;


@end


#endif