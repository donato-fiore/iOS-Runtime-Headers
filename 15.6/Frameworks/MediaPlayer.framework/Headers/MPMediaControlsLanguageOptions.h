// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIACONTROLSLANGUAGEOPTIONS_H
#define MPMEDIACONTROLSLANGUAGEOPTIONS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPMediaControlsLanguageOptions : NSObject {
    NSString *_routeUID;
    CGPoint _center;
}




-(id)initWithRouteUID:(id)arg0 atCenter:(struct CGPoint )arg1 ;
-(void)presentWithCompletion:(id)arg0 ;


@end


#endif