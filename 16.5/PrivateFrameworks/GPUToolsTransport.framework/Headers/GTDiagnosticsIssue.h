// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTDIAGNOSTICSISSUE_H
#define GTDIAGNOSTICSISSUE_H

@class NSArray, NSData, NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GTDiagnosticsIssue : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *callstack; // ivar: _callstack
@property (copy, nonatomic) NSData *cpuCallstackData; // ivar: _cpuCallstackData
@property (nonatomic) unsigned int cpuCallstackFramesNum; // ivar: _cpuCallstackFramesNum
@property (nonatomic) BOOL isDefaultLibrary; // ivar: _isDefaultLibrary
@property (copy, nonatomic) NSString *libraryHash; // ivar: _libraryHash
@property (copy, nonatomic) NSData *libraryOfflineSource; // ivar: _libraryOfflineSource
@property (copy, nonatomic) NSString *libraryOnlineSource; // ivar: _libraryOnlineSource
@property (copy, nonatomic) NSURL *metalFunctionFile; // ivar: _metalFunctionFile
@property (copy, nonatomic) NSString *metalFunctionName; // ivar: _metalFunctionName
@property (copy, nonatomic) NSString *metalLogMessage; // ivar: _metalLogMessage


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif