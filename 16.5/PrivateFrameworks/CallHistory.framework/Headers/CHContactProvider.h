// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHCONTACTPROVIDER_H
#define CHCONTACTPROVIDER_H

@protocol CHCallContactProvider, CHContactDataSource;

#import <Foundation/Foundation.h>


@interface CHContactProvider : NSObject <CHCallContactProvider>



@property (readonly, nonatomic) NSObject<CHContactDataSource> *dataSource; // ivar: _dataSource


-(id)contactsByHandleForCalls:(id)arg0 keyDescriptors:(id)arg1 error:(*id)arg2 ;
-(id)contactsByHandleForHandles:(id)arg0 keyDescriptors:(id)arg1 error:(*id)arg2 ;
-(id)initWithDataSource:(id)arg0 ;


@end


#endif