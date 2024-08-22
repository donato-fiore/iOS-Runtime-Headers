// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COSETTINGS_H
#define COSETTINGS_H

@class NSURL, NSMutableDictionary;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface COSettings : NSObject

@property (copy, nonatomic) id *clientCallback; // ivar: _clientCallback
@property (readonly, nonatomic) NSURL *path; // ivar: _path
@property (retain, nonatomic) NSMutableDictionary *settings; // ivar: _settings
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source; // ivar: _source
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(BOOL)createSettingsFile;
-(BOOL)readSettings;
-(BOOL)startMonitoringForFileDeletion;
-(BOOL)writeSettings;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)startMonitoringForChanges:(id)arg0 ;
-(void)stopMonitoring;
-(void)stopMonitoringForFileDeletion;


@end


#endif