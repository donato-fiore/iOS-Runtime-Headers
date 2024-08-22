// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCONTENTSCALEMANAGER_H
#define SXCONTENTSCALEMANAGER_H

@class NSString;
@protocol SXContentScaleManager, SXContentScaleManagerDelegate;

#import <Foundation/Foundation.h>


@interface SXContentScaleManager : NSObject <SXContentScaleManager>



@property (nonatomic) NSInteger contentScale; // ivar: _contentScale
@property (readonly, nonatomic) CGFloat contentScaleFactor; // ivar: _contentScaleFactor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXContentScaleManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithContentScale:(NSInteger)arg0 ;
-(void)decrease;
-(void)increase;
-(void)reset;


@end


#endif