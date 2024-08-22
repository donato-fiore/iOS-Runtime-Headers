// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHCONFIGURATION_H
#define CHCONFIGURATION_H

@class NSString;
@protocol CHConfiguration, CHKeyValueDataSource, CHConfigurationDelegate;

#import <Foundation/Foundation.h>


@interface CHConfiguration : NSObject <CHConfiguration>



@property (readonly, nonatomic, getter=isCloudKitEnabled) BOOL cloudKitEnabled;
@property (readonly, nonatomic) NSObject<CHKeyValueDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CHConfigurationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDataSource:(id)arg0 ;
-(id)numberForKey:(id)arg0 ;


@end


#endif