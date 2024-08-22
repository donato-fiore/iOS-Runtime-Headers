// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SWDATASTOREFACTORY_H
#define SWDATASTOREFACTORY_H

@class NSString;
@protocol SWDatastoreFactory, SWLogger;

#import <Foundation/Foundation.h>


@interface SWDatastoreFactory : NSObject <SWDatastoreFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly) Class superclass;


-(id)createDatastoreFromMessage:(id)arg0 ;
-(id)initWithLogger:(id)arg0 ;


@end


#endif