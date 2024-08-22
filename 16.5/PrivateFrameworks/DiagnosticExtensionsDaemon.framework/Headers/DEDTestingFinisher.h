// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDTESTINGFINISHER_H
#define DEDTESTINGFINISHER_H

@class NSString;
@protocol DEDFinisher, NSSecureCoding, DEDSecureArchiving;

#import <Foundation/Foundation.h>

#import "DEDBugSession.h"

@interface DEDTestingFinisher : NSObject <DEDFinisher, NSSecureCoding, DEDSecureArchiving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) DEDBugSession *session; // ivar: _session
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
+(id)log;
-(id)flattenDirectories:(id)arg0 progressHandler:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 session:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finishSession:(id)arg0 withConfiguration:(id)arg1 ;
-(void)writeData:(id)arg0 filename:(id)arg1 ;


@end


#endif