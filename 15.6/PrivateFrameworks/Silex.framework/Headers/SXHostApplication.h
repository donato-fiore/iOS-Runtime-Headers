// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXHOSTAPPLICATION_H
#define SXHOSTAPPLICATION_H

@class UIApplication, NSString;
@protocol SXHost;

#import <Foundation/Foundation.h>


@interface SXHostApplication : NSObject <SXHost>



@property (readonly, nonatomic) BOOL active;
@property (weak, nonatomic) UIApplication *application; // ivar: _application
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canOpenURL:(id)arg0 ;
-(id)initWithApplication:(id)arg0 ;
-(void)openURL:(id)arg0 completion:(id)arg1 ;


@end


#endif