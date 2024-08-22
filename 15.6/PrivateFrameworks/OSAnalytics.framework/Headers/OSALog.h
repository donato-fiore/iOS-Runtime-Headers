// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSALOG_H
#define OSALOG_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface OSALog : NSObject {
    BOOL _preserveFiles;
}


@property (readonly) NSString *bugType; // ivar: _bugType
@property BOOL deleteOnRetire; // ivar: _deleteOnRetire
@property (readonly) NSString *filepath; // ivar: _filepath
@property (readonly) NSDictionary *metaData; // ivar: _metaData
@property (readonly) *__sFILE stream; // ivar: _stream


+(id)createForSubmission:(id)arg0 metadata:(id)arg1 options:(id)arg2 error:(*id)arg3 writing:(id)arg4 ;
+(id)locallyCreateForSubmission:(id)arg0 metadata:(id)arg1 options:(id)arg2 error:(*id)arg3 writing:(id)arg4 ;
+(id)logObjForBugType:(id)arg0 ;
+(id)scanProxies:(id)arg0 ;
+(unsigned int)scanLogs:(id)arg0 from:(id)arg1 ;
+(unsigned int)scanLogs:(id)arg0 from:(id)arg1 options:(id)arg2 ;
+(void)cleanupForUser:(id)arg0 ;
+(void)cleanupRetired:(id)arg0 ;
+(void)enableLocalLogCreation;
+(void)iterateLogsWithOptions:(id)arg0 usingBlock:(id)arg1 ;
+(void)markDescriptor:(int)arg0 forKey:(id)arg1 withObj:(id)arg2 ;
+(void)markDescriptor:(int)arg0 withPairs:(id)arg1 andOptions:(id)arg2 ;
+(void)markPurgability:(id)arg0 ;
+(void)purgeLogs:(id)arg0 ;
-(BOOL)isReasonableSize:(NSInteger)arg0 forRouting:(id)arg1 ;
-(id)description;
-(id)initWithFilepath:(id)arg0 type:(id)arg1 ;
-(id)initWithPath:(id)arg0 forRouting:(id)arg1 options:(id)arg2 ;
-(id)initWithPath:(id)arg0 forRouting:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)initWithPath:(id)arg0 forRouting:(id)arg1 usingConfig:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)initWithPath:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithType:(id)arg0 filepath:(id)arg1 metadata:(id)arg2 options:(id)arg3 at:(CGFloat)arg4 error:(*id)arg5 ;
-(void)closeFileStream;
-(void)dealloc;
-(void)markWithKey:(char *)arg0 value:(char *)arg1 ;
-(void)rename:(id)arg0 ;
-(void)retire:(char *)arg0 ;


@end


#endif