// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXWEBCALACTION_H
#define SXWEBCALACTION_H

@class NSURL, NSString;
@protocol SXAction;

#import <Foundation/Foundation.h>


@interface SXWebCalAction : NSObject <SXAction>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;


-(id)initWithURL:(id)arg0 ;


@end


#endif