// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _REMFETCHEXECUTOR_H
#define _REMFETCHEXECUTOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _REMFetchExecutor : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)metadataFromFetchResult:(id)arg0 inStore:(id)arg1 error:(*id)arg2 ;
-(id)resultsFromFetchResult:(id)arg0 inStore:(id)arg1 error:(*id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif