// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKPLAYERTIMEBOUNDARYDIDCROSSEVENTUSERINFO_H
#define IKPLAYERTIMEBOUNDARYDIDCROSSEVENTUSERINFO_H

@class NSString, NSDictionary;
@protocol IKPlayerEventMarshaling;

#import <Foundation/Foundation.h>


@interface IKPlayerTimeBoundaryDidCrossEventUserInfo : NSObject <IKPlayerEventMarshaling>



@property (readonly, nonatomic) CGFloat boundary; // ivar: _boundary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) Class superclass;


-(id)initWithBoundary:(CGFloat)arg0 ;


@end


#endif