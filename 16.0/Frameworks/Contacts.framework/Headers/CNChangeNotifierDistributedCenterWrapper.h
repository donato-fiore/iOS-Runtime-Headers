// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCHANGENOTIFIERDISTRIBUTEDCENTERWRAPPER_H
#define CNCHANGENOTIFIERDISTRIBUTEDCENTERWRAPPER_H

@class NSString;
@protocol CNChangeNotifierWrapper;

#import <Foundation/Foundation.h>


@interface CNChangeNotifierDistributedCenterWrapper : NSObject <CNChangeNotifierWrapper>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)addObserver:(id)arg0 notification:(id)arg1 ;
-(void)postNotification:(id)arg0 ;
-(void)removeObserver:(id)arg0 notification:(id)arg1 ;


@end


#endif