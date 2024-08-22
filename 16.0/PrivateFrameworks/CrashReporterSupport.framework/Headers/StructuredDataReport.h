// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STRUCTUREDDATAREPORT_H
#define STRUCTUREDDATAREPORT_H

@class OSAReport, NSString;



@interface StructuredDataReport : OSAReport {
    int _log_type;
    NSString *_raw_logfile;
}




-(BOOL)isActionable;
-(id)appleCareDetails;
-(id)initWithType:(int)arg0 withFile:(id)arg1 ;
-(id)problemType;
-(id)reportNamePrefix;
-(int)streamContentAtLevel:(BOOL)arg0 withBlock:(id)arg1 ;
-(void)dealloc;
-(void)generateCustomLogAtLevel:(BOOL)arg0 withBlock:(id)arg1 ;
-(void)generateLogAtLevel:(BOOL)arg0 withBlock:(id)arg1 ;


@end


#endif