// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KVPROFILE_H
#define KVPROFILE_H

@protocol KVProfileReader;

#import <Foundation/Foundation.h>


@interface KVProfile : NSObject {
    NSObject<KVProfileReader> *_profileReader;
}




+(id)profileWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
+(void)initalize;
-(BOOL)donateWithServiceProvider:(id)arg0 error:(*id)arg1 ;
-(BOOL)enumerateDatasetsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(id)_donatorForDataset:(id)arg0 serviceProvider:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)initWithProfileData:(id)arg0 error:(*id)arg1 ;
-(id)initWithProfileData:(id)arg0 provider:(id)arg1 error:(*id)arg2 ;
-(id)profileInfo;


@end


#endif