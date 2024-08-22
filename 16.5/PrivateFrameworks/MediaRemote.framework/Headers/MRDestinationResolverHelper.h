// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRDESTINATIONRESOLVERHELPER_H
#define MRDESTINATIONRESOLVERHELPER_H

@class NSString;
@protocol MRDestinationResolverDelegate;

#import <Foundation/Foundation.h>


@interface MRDestinationResolverHelper : NSObject <MRDestinationResolverDelegate>



@property (copy, nonatomic) id *callback; // ivar: _callback
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger level; // ivar: _level
@property (readonly) Class superclass;


-(void)destinationResolver:(id)arg0 didFailWithError:(id)arg1 ;
-(void)destinationResolver:(id)arg0 endpointDidChange:(id)arg1 ;
-(void)destinationResolver:(id)arg0 originDidChange:(id)arg1 ;
-(void)destinationResolver:(id)arg0 playerPathDidChange:(id)arg1 ;
-(void)destinationResolverDestinationDidInvalidate:(id)arg0 ;


@end


#endif