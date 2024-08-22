// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHOTOSCONTROLCOMMAND_H
#define PHOTOSCONTROLCOMMAND_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PhotosControlCommand : NSObject {
    NSString *_invokedName;
    NSArray *_args;
}




+(NSInteger)maximumArgs;
+(NSInteger)minimumArgs;
+(char *)optstring;
+(id)abbreviations;
+(id)name;
+(id)usage;
+(id)usagesummary;
+(struct option *)longopts;
-(BOOL)processArgc:(int)arg0 argv:(*char *)arg1 ;
-(BOOL)processOption:(int)arg0 arg:(id)arg1 ;
-(BOOL)writeData:(id)arg0 toPathOrStdout:(id)arg1 ;
-(id)args;
-(id)dataForPathOrStdin:(id)arg0 ;
-(id)description;
-(id)formatDuration:(CGFloat)arg0 ;
-(id)init;
-(id)initWithArgc:(int)arg0 argv:(*char *)arg1 ;
-(id)invokedName;
-(int)run;
-(void)output:(id)arg0 ;
-(void)output:(id)arg0 arguments:(char *)arg1 ;
-(void)outputCompactJsonObject:(id)arg0 ;
-(void)outputError:(id)arg0 ;
-(void)outputError:(id)arg0 arguments:(char *)arg1 ;
-(void)outputErrorWithJsonOutput:(BOOL)arg0 format:(id)arg1 ;
-(void)outputJsonObject:(id)arg0 ;
-(void)willProcessOptions;


@end


#endif