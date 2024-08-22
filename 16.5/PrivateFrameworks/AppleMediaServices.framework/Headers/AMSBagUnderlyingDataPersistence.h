// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBAGUNDERLYINGDATAPERSISTENCE_H
#define AMSBAGUNDERLYINGDATAPERSISTENCE_H


#import <Foundation/Foundation.h>


@interface AMSBagUnderlyingDataPersistence : NSObject {
    ? directoryURL;
}




+(id)persistenceWithDefaultDirectory;
-(BOOL)persist:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeUnderlyingDataFor:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithDirectoryURL:(id)arg0 ;
-(id)underlyingDataFor:(id)arg0 error:(*id)arg1 ;


@end


#endif