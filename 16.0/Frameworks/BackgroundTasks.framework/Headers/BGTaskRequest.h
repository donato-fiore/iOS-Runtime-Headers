// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BGTASKREQUEST_H
#define BGTASKREQUEST_H

@class NSDate, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BGTaskRequest : NSObject <NSCopying>



@property (copy) NSDate *earliestBeginDate; // ivar: _earliestBeginDate
@property (readonly, copy) NSString *identifier; // ivar: _identifier


+(id)_requestFromActivity:(id)arg0 ;
-(id)_initWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif