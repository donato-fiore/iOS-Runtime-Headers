// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRILEVEL_H
#define TRILEVEL_H

@class NSData, NSMutableDictionary, NSString;


#import "TRIPBMessage.h"
#import "TRIFile.h"

@interface TRILevel : TRIPBMessage

@property (copy, nonatomic) NSData *binaryValue;
@property (nonatomic) BOOL booleanValue;
@property (retain, nonatomic) TRIFile *directoryValue;
@property (nonatomic) CGFloat doubleValue;
@property (retain, nonatomic) TRIFile *fileValue;
@property (nonatomic) float floatValue;
@property (nonatomic) int intValue;
@property (readonly, nonatomic) int levelOneOfCase;
@property (nonatomic) NSInteger longValue;
@property (retain, nonatomic) NSMutableDictionary *metadata;
@property (readonly, nonatomic) NSUInteger metadata_Count;
@property (copy, nonatomic) NSString *stringValue;


+(id)descriptor;
-(id)fileOrDirectoryLevelWithIsDir:(*BOOL)arg0 ;
-(id)object;


@end


#endif