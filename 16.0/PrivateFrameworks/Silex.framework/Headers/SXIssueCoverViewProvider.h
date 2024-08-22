// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXISSUECOVERVIEWPROVIDER_H
#define SXISSUECOVERVIEWPROVIDER_H

@class NSString;
@protocol SXIssueCoverViewProvider, SXIssueCoverLayoutAttributesFactory;

#import <Foundation/Foundation.h>


@interface SXIssueCoverViewProvider : NSObject <SXIssueCoverViewProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXIssueCoverLayoutAttributesFactory> *layoutOptionsFactory; // ivar: _layoutOptionsFactory
@property (readonly) Class superclass;


-(id)initWithLayoutAttributesFactory:(id)arg0 ;
-(id)viewForIssueCover:(id)arg0 ;
-(void)presentIssueCover:(id)arg0 onView:(id)arg1 options:(id)arg2 ;


@end


#endif