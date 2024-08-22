// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNTUCALLPROVIDERMANAGERDELEGATE_H
#define CNTUCALLPROVIDERMANAGERDELEGATE_H

@class NSString;
@protocol TUCallProviderManagerDelegate;

#import <Foundation/Foundation.h>


@interface CNTUCallProviderManagerDelegate : NSObject <TUCallProviderManagerDelegate>



@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBlock:(id)arg0 ;
-(void)providersChangedForProviderManager:(id)arg0 ;


@end


#endif