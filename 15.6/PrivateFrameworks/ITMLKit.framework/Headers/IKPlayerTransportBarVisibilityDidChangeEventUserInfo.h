// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKPLAYERTRANSPORTBARVISIBILITYDIDCHANGEEVENTUSERINFO_H
#define IKPLAYERTRANSPORTBARVISIBILITYDIDCHANGEEVENTUSERINFO_H

@class NSString, NSDictionary;
@protocol IKPlayerEventMarshaling;

#import <Foundation/Foundation.h>


@interface IKPlayerTransportBarVisibilityDidChangeEventUserInfo : NSObject <IKPlayerEventMarshaling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) Class superclass;


-(id)initWithHidden:(BOOL)arg0 ;


@end


#endif