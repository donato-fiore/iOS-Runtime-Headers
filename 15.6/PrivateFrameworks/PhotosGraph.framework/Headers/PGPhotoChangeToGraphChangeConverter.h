// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPHOTOCHANGETOGRAPHCHANGECONVERTER_H
#define PGPHOTOCHANGETOGRAPHCHANGECONVERTER_H

@class NSMutableDictionary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PGPhotoChangeToGraphChangeConverter : NSObject {
    NSMutableDictionary *_entityTranslatorByEntityName;
    NSObject<OS_os_log> *_loggingConnection;
}




-(id)graphChangesWithPhotoChange:(id)arg0 progressBlock:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 loggingConnection:(id)arg1 ;
-(void)_registerTranslatorsWithPhotoLibrary:(id)arg0 ;


@end


#endif