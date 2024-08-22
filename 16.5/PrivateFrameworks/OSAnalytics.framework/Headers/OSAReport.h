// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSAREPORT_H
#define OSAREPORT_H

@class NSString, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface OSAReport : NSObject {
    NSString *_incidentID;
    NSString *_logType;
    NSMutableDictionary *_logWritingOptions;
}


@property (readonly, nonatomic) CGFloat capture_time; // ivar: _capture_time
@property (retain, nonatomic) NSString *etlKey; // ivar: _etlKey
@property (readonly, nonatomic) NSString *logfile; // ivar: _logfile
@property (readonly, nonatomic) NSArray *notes; // ivar: _notes


+(id)bootArgs;
+(id)findBundleAtPath:(id)arg0 withKeys:(id)arg1 bundleURL:(*id)arg2 ;
+(id)kernelVersionDescription;
+(id)systemIDWithDescription:(BOOL)arg0 ;
+(unsigned char)executeWithTimeout:(unsigned int)arg0 Code:(id)arg1 ;
-(BOOL)isActionable;
-(BOOL)isAppleTV;
-(BOOL)saveWithOptions:(id)arg0 ;
-(CGFloat)captureTime;
-(id)additionalIPSMetadata;
-(id)appleCareDetails;
-(id)getSyslogForPids:(id)arg0 andOptionalSenders:(id)arg1 ;
-(id)incidentID;
-(id)init;
-(id)problemType;
-(id)reportNamePrefix;
-(int)streamContentAtLevel:(BOOL)arg0 withBlock:(id)arg1 ;
-(void)generateLogAtLevel:(BOOL)arg0 withBlock:(id)arg1 ;
-(void)symlink:(id)arg0 ;


@end


#endif