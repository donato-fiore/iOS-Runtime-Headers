// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUSERDEFAULTSSTANDARDDATASOURCE_H
#define PXUSERDEFAULTSSTANDARDDATASOURCE_H

@class NSDate;
@protocol PXUserDefaultsDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXUserDefaultsStandardDataSource : NSObject <PXUserDefaultsDataSource>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NSDate *currentDate;


-(id)init;
-(id)persistedValueForKey:(id)arg0 ;
-(void)setPersistedValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif