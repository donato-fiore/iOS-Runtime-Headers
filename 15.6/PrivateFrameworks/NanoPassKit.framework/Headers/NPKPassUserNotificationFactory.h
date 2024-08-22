// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPASSUSERNOTIFICATIONFACTORY_H
#define NPKPASSUSERNOTIFICATIONFACTORY_H

@protocol NPKPassUserNotificationFactoryDataSource;

#import <Foundation/Foundation.h>


@interface NPKPassUserNotificationFactory : NSObject

@property (weak, nonatomic) NSObject<NPKPassUserNotificationFactoryDataSource> *dataSource; // ivar: _dataSource


-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(id)passNotificationWithType:(NSUInteger)arg0 passUniqueID:(id)arg1 ;


@end


#endif