// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXMDISPLAYDESCRIPTOR_H
#define MXMDISPLAYDESCRIPTOR_H

@class CADisplay, NSString;

#import <Foundation/Foundation.h>


@interface MXMDisplayDescriptor : NSObject

@property (readonly, nonatomic) CADisplay *display; // ivar: _display
@property (readonly, nonatomic, getter=main) BOOL isMain;
@property (readonly, nonatomic) BOOL main;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat refreshRate;


-(id)initWithDisplay:(id)arg0 ;


@end


#endif