// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBAPPVIEWMODEL_H
#define AMSUIWEBAPPVIEWMODEL_H

@class NSString, NSURL;
@protocol AMSUIWebModelInterface;

#import <Foundation/Foundation.h>


@interface AMSUIWebAppViewModel : NSObject <AMSUIWebModelInterface>



@property (retain, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)validateJSObject:(id)arg0 ;
-(id)iconWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;


@end


#endif