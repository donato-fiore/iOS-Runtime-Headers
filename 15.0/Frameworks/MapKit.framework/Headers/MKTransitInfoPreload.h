// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTRANSITINFOPRELOAD_H
#define MKTRANSITINFOPRELOAD_H

@class NSAttributedString, NSString;
@protocol MKTransitInfoPreload;

#import <Foundation/Foundation.h>


@interface MKTransitInfoPreload : NSObject <MKTransitInfoPreload>



@property (readonly, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAttributedString:(id)arg0 ;


@end


#endif