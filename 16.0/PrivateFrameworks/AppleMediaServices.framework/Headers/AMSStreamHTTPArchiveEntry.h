// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSSTREAMHTTPARCHIVEENTRY_H
#define AMSSTREAMHTTPARCHIVEENTRY_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSStreamHTTPArchiveEntry : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *entries; // ivar: _entries
@property (retain, nonatomic) NSString *urlString; // ivar: _urlString


+(BOOL)supportsSecureCoding;
+(id)_createEntriesForTaskMetrics:(id)arg0 requestData:(id)arg1 responseData:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntries:(id)arg0 ;
-(id)initWithHTTPArchiveTaskInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif