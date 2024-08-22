// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADCALENDARDATABASECALSTOREINFOPROVIDER_H
#define CADCALENDARDATABASECALSTOREINFOPROVIDER_H

@protocol CADCalStoreInfoProvider, CADDatabaseProvider;

#import <Foundation/Foundation.h>


@interface CADCalendarDatabaseCalStoreInfoProvider : NSObject <CADCalStoreInfoProvider>



@property (readonly, weak, nonatomic) NSObject<CADDatabaseProvider> *databaseProvider; // ivar: _databaseProvider


-(id)initWithDatabaseProvider:(id)arg0 ;
-(id)storeInfoList;


@end


#endif