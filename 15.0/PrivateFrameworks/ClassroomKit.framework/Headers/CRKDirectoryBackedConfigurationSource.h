// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKDIRECTORYBACKEDCONFIGURATIONSOURCE_H
#define CRKDIRECTORYBACKEDCONFIGURATIONSOURCE_H

@class NSURL, NSString;
@protocol CRKFileBackedConfigurationSourceDelegate, CRKConfigurationSource;

#import <Foundation/Foundation.h>

#import "CRKFileBackedConfigurationSource.h"

@interface CRKDirectoryBackedConfigurationSource : NSObject <CRKFileBackedConfigurationSourceDelegate, CRKConfigurationSource>

 {
    NSURL *mDirectoryURL;
    CRKFileBackedConfigurationSource *mFileBackedSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirectoryEmpty:(id)arg0 ;
-(id)init;
-(id)initWithDirectoryURL:(id)arg0 fileName:(id)arg1 ;
-(id)initWithDirectoryURL:(id)arg0 fileName:(id)arg1 callbackQueue:(id)arg2 ;
-(void)fetchConfiguration:(id)arg0 ;
-(void)fileBackedConfigurationSource:(id)arg0 didDeleteConfigurationAtURL:(id)arg1 inDirectory:(id)arg2 ;
-(void)setConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif